#pragma once
#include <qabstractitemmodel.h>
#include "Service.h"

class starsTableModel : public QAbstractTableModel
{
private:
	Service& service;
public:
	starsTableModel(Service& service) : service{ service } {}

	int rowCount(const QModelIndex& parent = QModelIndex()) const;
	int columnCount(const QModelIndex& parent = QModelIndex()) const;
	QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;
    void addStar(const Star& star) {
        // Add the star to the service
        service.addStar(star);

        // Determine the row index where the star was inserted
        int row = rowCount();

        // Emit the signal to notify the view that rows are about to be inserted
        beginInsertRows(QModelIndex(), row, row);

        // Emit the signal to notify the view that rows have been inserted
        endInsertRows();
    }
};

