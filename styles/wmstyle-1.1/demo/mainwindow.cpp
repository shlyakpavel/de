/****************************************************************************
* Modern Qt style for Windows
* Copyright (C) 2008-2009 Michał Męciński
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*   1. Redistributions of source code must retain the above copyright notice,
*      this list of conditions and the following disclaimer.
*   2. Redistributions in binary form must reproduce the above copyright
*      notice, this list of conditions and the following disclaimer in the
*      documentation and/or other materials provided with the distribution.
*   3. Neither the name of the copyright holder nor the names of the
*      contributors may be used to endorse or promote products derived from
*      this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
****************************************************************************/

#include "mainwindow.h"

#include <QToolButton>

MainWindow::MainWindow()
{
    m_ui.setupUi( this );

    QMenu* menu = new QMenu( this );
    menu->addAction( tr( "One" ) );
    menu->addAction( tr( "Two" ) );
    menu->addAction( tr( "Three" ) );

    QToolButton* popupButton1 = new QToolButton();
    popupButton1->setIcon( QIcon( ":/icons/new.png" ) );
    popupButton1->setMenu( menu );
    popupButton1->setPopupMode( QToolButton::InstantPopup );

    QToolButton* popupButton2 = new QToolButton();
    popupButton2->setIcon( QIcon( ":/icons/saveas.png" ) );
    popupButton2->setMenu( menu );
    popupButton2->setPopupMode( QToolButton::MenuButtonPopup );

    m_ui.toolBar->addSeparator();
    m_ui.toolBar->addWidget( popupButton1 );
    m_ui.toolBar->addWidget( popupButton2 );
}

MainWindow::~MainWindow()
{
}
