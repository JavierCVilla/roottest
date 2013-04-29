//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef Trk__LocalParameters_p1_h
#define Trk__LocalParameters_p1_h
namespace Trk {
class LocalParameters_p1;
} // end of namespace.

#include "Riostream.h"
#include <vector>

namespace Trk {
class LocalParameters_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   int         m_parameterKey;    //
   vector<float> m_vec;             //

   LocalParameters_p1();
   LocalParameters_p1(const LocalParameters_p1 & );
   virtual ~LocalParameters_p1();

};
} // namespace
#endif