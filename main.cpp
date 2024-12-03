#include <iostream>
using namespace std;
#include "Modal/RubiksCube.h"
#include "../RubicsCubeV2/Modal/RubiksCube3dArray.cpp"
#include "../RubicsCubeV2/Modal/RubiksCube1dArray.cpp"

#include "Solver/DFSSolver.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
   RubiksCube3dArray object3Darray;
   object3Darray.print();

   vector<RubiksCube3dArray::MOVE> movestoshuffle= object3Darray.randomShuffleCube(6);
   object3Darray.print();
   for (auto move : movestoshuffle) cout<<object3Darray.getMove(move)<<" ";
   cout<<"\n";
   DFSSolver<RubiksCube3dArray,Hash3d> dfsSolver(object3Darray,6);
   vector<RubiksCube3dArray::MOVE> movestosolve = dfsSolver.solve();
   dfsSolver.rubiksCube.print();
   for (auto move : movestosolve) cout<<object3Darray.getMove(move)<<" ";
   cout<<"\n";
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.