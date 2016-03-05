
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicTableUI__
#define __javax_swing_plaf_basic_BasicTableUI__

#pragma interface

#include <javax/swing/plaf/TableUI.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Dimension;
        class Graphics;
        class Rectangle;
      namespace event
      {
          class FocusListener;
          class KeyListener;
      }
    }
    namespace beans
    {
        class PropertyChangeListener;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class ActionMap;
        class CellRendererPane;
        class JComponent;
        class JTable;
      namespace border
      {
          class Border;
      }
      namespace event
      {
          class MouseInputListener;
      }
      namespace plaf
      {
          class ComponentUI;
        namespace basic
        {
            class BasicTableUI;
            class BasicTableUI$TableAction;
        }
      }
      namespace table
      {
          class TableCellRenderer;
      }
    }
  }
}

class javax::swing::plaf::basic::BasicTableUI : public ::javax::swing::plaf::TableUI
{

public:
  BasicTableUI();
  static ::javax::swing::plaf::ComponentUI * createUI(::javax::swing::JComponent *);
public: // actually protected
  virtual ::java::awt::event::FocusListener * createFocusListener();
  virtual ::javax::swing::event::MouseInputListener * createMouseInputListener();
  virtual ::java::awt::event::KeyListener * createKeyListener();
public:
  virtual ::java::awt::Dimension * getMaximumSize(::javax::swing::JComponent *);
  virtual ::java::awt::Dimension * getMinimumSize(::javax::swing::JComponent *);
  virtual ::java::awt::Dimension * getPreferredSize(::javax::swing::JComponent *);
private:
  jint getHeight();
public: // actually protected
  virtual void installDefaults();
  virtual void installKeyboardActions();
private:
  ::javax::swing::ActionMap * getActionMap();
  ::javax::swing::ActionMap * createDefaultActions();
public: // actually protected
  virtual void installListeners();
  virtual void uninstallDefaults();
  virtual void uninstallKeyboardActions();
  virtual void uninstallListeners();
public:
  virtual void installUI(::javax::swing::JComponent *);
  virtual void uninstallUI(::javax::swing::JComponent *);
public: // actually package-private
  virtual void paintCell(::java::awt::Graphics *, jint, jint, ::java::awt::Rectangle *, ::javax::swing::table::TableCellRenderer *);
public:
  virtual void paint(::java::awt::Graphics *, ::javax::swing::JComponent *);
public: // actually protected
  ::java::awt::event::FocusListener * __attribute__((aligned(__alignof__( ::javax::swing::plaf::TableUI)))) focusListener;
  ::java::awt::event::KeyListener * keyListener;
  ::javax::swing::event::MouseInputListener * mouseInputListener;
  ::javax::swing::CellRendererPane * rendererPane;
  ::javax::swing::JTable * table;
public: // actually package-private
  ::javax::swing::border::Border * cellBorder;
  ::javax::swing::plaf::basic::BasicTableUI$TableAction * action;
private:
  ::java::beans::PropertyChangeListener * propertyChangeListener;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicTableUI__
