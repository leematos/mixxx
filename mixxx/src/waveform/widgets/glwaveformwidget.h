#ifndef GLWAVEFORMWIDGET_H
#define GLWAVEFORMWIDGET_H

#include <QtOpenGL/QGLWidget>
#include "waveformwidgetabstract.h"

class GLWaveformWidget : public WaveformWidgetAbstract, public QGLWidget
{
public:
    GLWaveformWidget( const char* group, QWidget* parent);
    virtual ~GLWaveformWidget();

    virtual QString getWaveformWidgetName() { return tr("Filtered");}
    virtual WaveformWidgetType::Type getType() const { return WaveformWidgetType::GLSLWaveform;}

    virtual bool useOpenGl() const { return true;}
    virtual bool useOpenGLShaders() const { return false;}

protected:
    virtual void castToQWidget();
    virtual void paintEvent(QPaintEvent* event);

private:
    GLWaveformWidget() {}
    friend class WaveformWidgetFactory;
};

#endif // GLWAVEFORMWIDGET_H