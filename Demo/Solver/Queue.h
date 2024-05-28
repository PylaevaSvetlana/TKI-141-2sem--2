#pragma once
#include <iostream>
#include <initializer_list>
#include "Node.h"


namespace Queue
{

	class Queue
	{
	private:
		/**
		* @brief - ���� ������ �������.
		*/
		Node* head;
		/**
		* @brief - ���� ������ �������.
		*/
		Node* tail;
		/**
		* @brief - ������ �������.
		*/
		size_t size;

	public:
		/**
	    * @brief - ����������� ������ �������.
	    */
		Queue();
		/**
		* @brief - ���������� ������ �������.
		*/
		~Queue();
		/**
		* @brief - ����������� �� ������� �������������.
		* @param list - ������
		*/
		Queue(std::initializer_list<int> list);
		/**
		* @brief - �������,����������� ������� � ����� �������.
		* @param value - �������� ������ ��������.
		*/
		void enqueue(const int value);
		/**
		* @brief - �������,����������� ������� �� ������ �������.
		*/
		void dequeue();
		/**
		* @brief - �������,�������� �������� �������.
		*/
		int peek();
		/**
		* @brief - �������� ������ �����.
		*/
		friend std::ostream& operator << (std::ostream& output, const Queue& queue);
		/**
		* @brief - ����������� �����������.
		* @param other - ������ �������.
		*/
		Queue(const Queue& other);
		/**
		* @brief - ����������� �����������.
		* @param other - ������ �������.
		*/
		Queue(Queue&& other) noexcept;
		/**
		* @brief - �������� ������������ � ������� �����������.
		* @param other - ������ �������.
		* @return - ���������� ������� � ������� �����������.
		*/
		Queue& operator = (const Queue& other);
		/**
		* @brief - �������� ������������ � ������� �����������.
		* @param other - ������ �������.
		* @return - ���������� ������� � ������� �����������.
		*/
		Queue& operator = (Queue&& other) noexcept;
	};
}

