namespace MATH::Graphs;

/**
 * @brief Interface for trees
 *
 * @tparam Weight_t Weight type of the tree
 * @tparam Label_t Label type of the tree
 * @tparam Tag_t Tag type of the tree
 * @see IGraph
 */
template<class Weight_t, class Label_t = Weight_t, class Tag_t = Weight_t>
class ITree: public virtual IGraph<Weight_t, Label_t, Tag_t> {
public:
  /**
   * @brief Simple constructor
   */
  ITree() {
  }

  /**
   * @brief Virtual destructor
   */
  virtual ~ITree() {
  }

  /**
   * @brief getter for the root node
   */
  virtual Node<Weight_t, Label_t, Tag_t>* getRoot() = 0;
};
