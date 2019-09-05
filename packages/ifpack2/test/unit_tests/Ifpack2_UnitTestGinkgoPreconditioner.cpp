#include "Teuchos_UnitTestHarness.hpp"
#include "Tpetra_CrsMatrix.hpp"
#include "Tpetra_Core.hpp"
#include "Tpetra_Map.hpp"
#include <type_traits>

namespace { // (anonymous)

TEUCHOS_UNIT_TEST_TEMPLATE_3_DECL(Ginkgo, Test0, SC, LO, GO)
{
  // We are now in a class method declared by the above macro.
  // The method has these input arguments:
  // (Teuchos::FancyOStream& out, bool& success)

  using Teuchos::RCP;
  using Teuchos::rcp;
  using Teuchos::tuple;
  using std::endl;
  typedef Tpetra::Map<>::node_type NT;
  typedef Tpetra::global_size_t GST;
  typedef Tpetra::CrsMatrix<SC, LO, GO, NT> crs_matrix_type;
  typedef Tpetra::RowMatrix<SC, LO, GO, NT> row_matrix_type;
  typedef Tpetra::Map<LO, GO, NT> map_type;
  typedef typename Teuchos::ScalarTraits<SC>::magnitudeType magnitude_type;
  const SC ONE = Teuchos::ScalarTraits<SC>::one ();
}

// Define the set of unit tests to instantiate in this file.
#define UNIT_TEST_GROUP( SC, LO, GO ) \
  TEUCHOS_UNIT_TEST_TEMPLATE_3_INSTANT( Ginkgo, Test0, SC, LO, GO )

#include "Ifpack2_ETIHelperMacros.h"

IFPACK2_ETI_MANGLING_TYPEDEFS()

IFPACK2_INSTANTIATE_SLG( UNIT_TEST_GROUP )

} // namespace (anonymous)
