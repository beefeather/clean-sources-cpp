namespace MATH::Graphs::test;

int main() {
  std::vector<Tester::TestCase*> tests;
  tests.push_back(new ReverseTreeTest());
  tests.push_back(new ForestTest());
  tests.push_back(new LinkedGraphTest());
  //Logger::Logger::initLog("test.log");
  for (std::vector<Tester::TestCase*>::iterator it = tests.begin();
      it != tests.end(); ++it) {
    std::cout << (**it).getResultName() << ": " << std::endl;
    std::cout << "=================" << std::endl;
    (*it)->run();
  }
  //Logger::Logger::closeLog();
  return 0;
}

class ForestTest: public Tester::TestCase {
public:
  ForestTest() :
      Tester::TestCase("ForestTest.res") {
  }

  virtual void run() {
    bool tmp = true;
    testCreate();
    if (isOk())
      std::cout << "\tOK................testCreate" << std::endl;
    else
      std::cout << "\tNOK...............testCreate" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testSearch();
    if (isOk())
      std::cout << "\tOK................testSearch" << std::endl;
    else
      std::cout << "\tNOK...............testSearch" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testInsert();
    if (isOk())
      std::cout << "\tOK................testInsert" << std::endl;
    else
      std::cout << "\tNOK...............testInsert" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testPushBack();
    if (isOk())
      std::cout << "\tOK................testPushBack" << std::endl;
    else
      std::cout << "\tNOK...............testPushBack" << std::endl;
    tmp = tmp && isOk();
    ok = true;
  }

  void testCreate() {
    MATH::Graphs::ReverseTree<int> tree1;
    MATH::Graphs::ReverseTree<int> tree2;
    MATH::Graphs::ReverseTree<int> tree3;
    MATH::Graphs::ReverseTree<int> tree4;
    MATH::Graphs::Forest<int, MATH::Graphs::ReverseTree<int> >* forest =
        new MATH::Graphs::Forest<int, MATH::Graphs::ReverseTree<int> >();
    tree1.push_front(8);
    tree1.push_front(7);
    tree1.push_front(6);
    tree1.push_front(5);
    tree1.push_front(4);
    tree1.push_front(3);
    tree1.push_front(2);
    tree1.push_front(1);
    tree1.push_front(0);

    tree2.push_front(10);
    tree2.push_front(9);
    tree2.push_front(0);

    tree3.push_front(13);
    tree3.push_front(12);
    tree3.push_front(5);

    tree4.push_front(20);
    tree4.push_front(19);
    tree4.push_front(18);
    tree4.push_front(17);

    forest->push_back(tree1);
    forest->insert(tree2);
    forest->insert(tree3);
    forest->push_back(tree4);
    std::cout << *forest << std::endl;
  }

  void testSearch() {
    MATH::Graphs::ReverseTree<int> tree1;
    MATH::Graphs::ReverseTree<int> tree2;
    MATH::Graphs::ReverseTree<int> tree3;
    MATH::Graphs::ReverseTree<int> tree4;
    MATH::Graphs::Forest<int, MATH::Graphs::ReverseTree<int> >* forest =
        new MATH::Graphs::Forest<int, MATH::Graphs::ReverseTree<int> >();
    tree1.push_front(8);
    tree1.push_front(7);
    tree1.push_front(6);
    tree1.push_front(5);
    tree1.push_front(4);
    tree1.push_front(3);
    tree1.push_front(2);
    tree1.push_front(1);
    tree1.push_front(0);

    tree2.push_front(10);
    tree2.push_front(9);
    tree2.push_front(0);

    tree3.push_front(13);
    tree3.push_front(12);
    tree3.push_front(5);

    tree4.push_front(20);
    tree4.push_front(19);
    tree4.push_front(18);
    tree4.push_front(17);

    forest->push_back(tree1);
    forest->insert(tree2);
    forest->insert(tree3);
    forest->push_back(tree4);

    std::cout << forest->isIn(17) << std::endl;
  }

  void testInsert() {

  }

  void testPushBack() {

  }
};

class LinkedGraphTest: public Tester::TestCase {
public:
  LinkedGraphTest() :
      Tester::TestCase("LinkedGraphTest.res") {
  }

  virtual void run() {
    bool tmp = true;
    testCreate();
    if (isOk())
      std::cout << "\tOK................testCreate" << std::endl;
    else
      std::cout << "\tNOK...............testCreate" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testSearch();
    if (isOk())
      std::cout << "\tOK................testSearch" << std::endl;
    else
      std::cout << "\tNOK...............testSearch" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testInsert();
    if (isOk())
      std::cout << "\tOK................testInsert" << std::endl;
    else
      std::cout << "\tNOK...............testInsert" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testPushBack();
    if (isOk())
      std::cout << "\tOK................testPushBack" << std::endl;
    else
      std::cout << "\tNOK...............testPushBack" << std::endl;
    tmp = tmp && isOk();
    ok = true;
  }

  void testCreate() {
    MATH::Graphs::LinkedGraph<int> g;
    g.addNode(0, 0);
    g.addTo(1, 0, 5);
    g.addTo(2, 0, 7);
    g.addTo(3, 1, 6);
    g.addEdge(2, 3, 4);
    g.addEdge(0, 3, 4);
    std::cout << "g" << std::endl << g << std::endl;
  }

  void testSearch() {

  }

  void testInsert() {

  }

  void testPushBack() {

  }

};

class ReverseTreeTest: public Tester::TestCase {
public:
  ReverseTreeTest() :
      Tester::TestCase("ReverseTreeTest.res") {
  }

  virtual void run() {
    bool tmp = true;
    testCreate();
    if (isOk())
      std::cout << "\tOK................testCreate" << std::endl;
    else
      std::cout << "\tNOK...............testCreate" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testSearch();
    if (isOk())
      std::cout << "\tOK................testSearch" << std::endl;
    else
      std::cout << "\tNOK...............testSearch" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testInsert();
    if (isOk())
      std::cout << "\tOK................testInsert" << std::endl;
    else
      std::cout << "\tNOK...............testInsert" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testInsertGraph();
    if (isOk())
      std::cout << "\tOK................testInsertGraph" << std::endl;
    else
      std::cout << "\tNOK...............testInsertGraph" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testInsertNode();
    if (isOk())
      std::cout << "\tOK................testInsertNode" << std::endl;
    else
      std::cout << "\tNOK...............testInsertNode" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testJoinToLeaf();
    if (isOk())
      std::cout << "\tOK................testJoinToLeaf" << std::endl;
    else
      std::cout << "\tNOK...............testJoinToLeaf" << std::endl;
    tmp = tmp && isOk();
    ok = true;

    testSimplify();
    if (isOk())
      std::cout << "\tOK................testSimplify" << std::endl;
    else
      std::cout << "\tNOK...............testSimplify" << std::endl;
    tmp = tmp && isOk();
    ok = true;
  }

  void testCreate() {
    MATH::Graphs::ReverseTree<int> tree(8);
    tree.push_front(7);
    tree.push_front(6);
    tree.push_front(5);
    tree.push_front(4);
    tree.push_front(3);
    tree.push_front(2);
    tree.push_front(1);
    tree.push_front(0);
    //std::cout<<tree<<std::endl;
  }

  void testSearch() {
    MATH::Graphs::ReverseTree<int> tree(8);
    tree.push_front(7);
    tree.push_front(6);
    tree.push_front(5);
    tree.push_front(4);
    tree.push_front(3);
    tree.push_front(2);
    tree.push_front(1);
    tree.push_front(0);
    MATH::Graphs::ReverseTree<int>::ReverseTreeNode *node = 0;
    for (int i = 1; i < 7; ++i) {
      if (tree.find(i, node)) {
        assertNotEquale(node->prevs.size(), 1);
        assertNotEquale(node->prevs[0]->value, i + 1);
        assertNotEquale(node->next->value, i - 1);
      } else {
        assertTrue(true, "Find faulier");
      }
    }
  }

  void testInsert() {
    MATH::Graphs::ReverseTree<int> tree(8);
    tree.push_front(7);
    tree.push_front(6);
    tree.push_front(5);
    tree.push_front(4);
    tree.push_front(3);
    tree.push_front(2);
    tree.push_front(1);
    tree.push_front(0);

    MATH::Graphs::ReverseTree<int>::ReverseTreeNode* node =
        new MATH::Graphs::ReverseTree<int>::ReverseTreeNode(18);
    MATH::Graphs::ReverseTree<int>::ReverseTreeNode* node2 =
        new MATH::Graphs::ReverseTree<int>::ReverseTreeNode(4, node);
    tree.insert(node2);
    delete node;
    delete node2;

    if (tree.find(4, node)) {
      assertNotEquale(node->prevs.size(), 2);
      assertNotEquale(node->prevs[0]->value, 5);
      assertNotEquale(node->prevs[1]->value, 18);
    } else {
      assertTrue(true, "Find faulier");
    }

  }

  void testInsertGraph() {
    MATH::Graphs::ReverseTree<int> tree(8);
    tree.push_front(7);
    tree.push_front(6);
    tree.push_front(5);
    tree.push_front(4);
    tree.push_front(3);
    tree.push_front(2);
    tree.push_front(1);
    tree.push_front(0);

    MATH::Graphs::ReverseTree<int> tree2(12);
    tree2.push_front(11);
    tree2.push_front(10);
    tree2.push_front(9);
    tree2.push_front(5);
    tree.insert(tree2);
    //std::cout<<tree<<std::endl;
    MATH::Graphs::ReverseTree<int>::ReverseTreeNode* node;
    if (tree.find(5, node)) {
      assertNotEquale(node->prevs.size(), 2);
      assertNotEquale(node->prevs[0]->value, 6);
      assertNotEquale(node->prevs[1]->value, 9);
      assertNotEquale(node->next->value, 4);
    } else {
      assertTrue(true, "Find faulier");
    }
  }

  void testInsertNode() {
    MATH::Graphs::ReverseTree<int> tree(8);
    tree.push_front(7);
    tree.push_front(6);
    tree.push_front(5);
    tree.push_front(4);
    tree.push_front(3);
    tree.push_front(2);
    tree.push_front(1);
    tree.push_front(0);

    MATH::Graphs::ReverseTree<int> tree2(12);
    tree2.push_front(11);
    tree2.push_front(10);
    tree2.push_front(9);
    tree2.push_front(111);
    assertTrue(tree.insert(tree2));
    //std::cout<<tree<<std::endl;
  }

  void testJoinToLeaf() {
    MATH::Graphs::ReverseTree<int> tree(8);
    tree.push_front(7);
    tree.push_front(6);
    tree.push_front(5);
    tree.push_front(4);
    tree.push_front(3);
    tree.push_front(2);
    tree.push_front(1);
    tree.push_front(0);

    MATH::Graphs::ReverseTree<int> tree2(12);
    tree2.push_front(11);
    tree2.push_front(10);
    tree2.push_front(9);
    tree2.push_front(111);
    tree2.push_front(0);
    assertFalse(tree.joinToLeaf(tree2));
    assertFalse(tree.joinToLeaf(tree2));
    assertNotEquale(tree.getLeaf()->prevs.size(), 3);
    //std::cout<<tree<<std::endl;
  }

  void testSimplify() {
    MATH::Graphs::ReverseTree<int> tree(8);
    tree.push_front(7);
    tree.push_front(6);
    tree.push_front(5);
    tree.push_front(4);
    tree.push_front(3);
    tree.push_front(2);
    tree.push_front(1);
    tree.push_front(0);

    MATH::Graphs::ReverseTree<int> tree2(12);
    tree2.push_front(11);
    tree2.push_front(10);
    tree2.push_front(9);
    tree2.push_front(111);
    tree2.push_front(0);
    assertFalse(tree.joinToLeaf(tree2));
    assertFalse(tree.joinToLeaf(tree2));
    tree.simplify();
    assertNotEquale(tree.getLeaf()->prevs.size(), 2);
    std::cout << tree << std::endl;
  }

};
