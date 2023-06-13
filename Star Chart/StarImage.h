#pragma once
#include <qwidget.h>
#include <qpainter.h>
#include "Service.h"
class StarImage : public QWidget
{
	void paintEvent(QPaintEvent* ev) override {
		QPainter p{ this };
		p.drawEllipse(0, 0, 10, 10);
	}
};

