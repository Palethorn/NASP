/*
    General Tree implementation
    Copyright (C) 2011  David Ćavar

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef HEADER_H
#define HEADER_H
	int removeChildById(node *tree, int id);
	int removeChildByValue(node *tree, int value);
	node *findElementById(node *tree,int id);
	node *findElementByValue(node *tree, int value);
	void printPreOrder(node *tree);
	void printPostOrder(node *tree);
	int addChildByParentId(node *tree, int parentId, int newValue, int newId);
	int addChildByParentValue(node *tree, int parentValue, int newValue, int newId);
#endif
