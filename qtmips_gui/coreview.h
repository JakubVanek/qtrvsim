#ifndef COREVIEW_H
#define COREVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "qtmipsmachine.h"
#include "coreview/connection.h"
#include "coreview/programcounter.h"
#include "coreview/multiplexer.h"
#include "coreview/latch.h"

class CoreView : public QGraphicsView {
    Q_OBJECT
public:
    CoreView(QWidget *parent, QtMipsMachine *machine);

private:
    void resizeEvent(QResizeEvent *event);

    QGraphicsScene scene;
    QtMipsMachine *machine;

    coreview::ProgramCounter *pc;
    coreview::Multiplexer *pc_multiplexer;
    coreview::Connection *pc2pc;
    coreview::Latch *testlatch;
};

#else

class CoreView;
class CoreViewBlock;

#endif // COREVIEW_H