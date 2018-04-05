#!/bin/bash

PROJECTDIR=/home/data/Projects/MatisseWorkspace

cd $PROJECTDIR/Src/Libraries/MatisseTools
lupdate ./MatisseTools.pro

cd $PROJECTDIR/Src/MatisseServer
lupdate ./MatisseServer.pro

cd $PROJECTDIR/Src/Libraries/MatisseTools
lrelease ./MatisseTools.pro

cd $PROJECTDIR/Src/MatisseServer
lrelease ./MatisseServer.pro