#include "starsTableModel.h"

int starsTableModel::rowCount(const QModelIndex& parent) const {
	return this->service.getAllStars().size();
}

int starsTableModel::columnCount(const QModelIndex& parent) const {
	return 5;
}


QVariant starsTableModel::data(const QModelIndex& index, int role) const {
	int row = index.row();
	int column = index.column();

	Star currentStar = service.getAllStars()[row];

	if (role == Qt::DisplayRole) {
		switch (column) {
		case 0:
			return QString::fromStdString(currentStar.getName());

		case 1:
			return QString::fromStdString(currentStar.getConstelation());

		case 2:
			return QString::fromStdString(to_string(currentStar.getRA()));

		case 3:
			return QString::fromStdString(to_string(currentStar.getDec()));

		case 4:
			return QString::fromStdString(to_string(currentStar.getDiamenter()));

		default:
			break;
		}
	}

	return QVariant();
}