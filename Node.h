template <class T> class Node {
	protected:
		T value;
		Node <T>* node;

	public:
		Node(T);
		Node(T, Node <T>*);
		T getValue() const;
		Node<T>* getNode() const;
		void setNode(Node<T>*);
};

template <class T>
Node<T>::Node(T value) {
	this->value = value;
	this->node = NULL;
}

template <class T>
Node<T>::Node(T value, Node<T>* node) {
	this->value = value;
	this->node = node;
}

template <class T>
T Node<T>::getValue() const {
	return this->value;
}

template <class T>
Node<T>* Node<T>::getNode() const {
	return this->node;
}

template <class T>
void Node<T>::setNode(Node<T>* node) {
	this->node = node;
}