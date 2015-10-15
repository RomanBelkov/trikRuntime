/* Copyright 2015 CyberTech Labs Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License. */

#pragma once

#include <QtCore/QObject>
#include <QtCore/QTimer>

namespace trikGui {

class Controller;

/// Launches "autorun.js" file in "scripts" directory if it exists.
class AutoRunner : QObject
{
	Q_OBJECT

public:
	/// Constructor.
	/// @param parent - parent of this widget in Qt widget parent-child system.
	explicit AutoRunner(Controller &controller);

private slots:
	void doLaunch();

private:
	static QString fileName();

	Controller &mController;

	/// Timer that is needed to wait for trikControl to initialize.
	/// @todo Make underlying components emit signal when they are ready for script execution.
//	QTimer mInitTimer;
};

}