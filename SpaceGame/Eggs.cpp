#include "Eggs.h"



Eggs::Eggs(Resources& res, const sf::FloatRect& chikenGlobalBounds, const sf::Vector2f& chickenPosition)
{
	m_sprite.setAnimation(res.getEggAnimation(0));
	
	m_sprite.setPosition({ chickenPosition.x + chikenGlobalBounds.width / 2 ,chickenPosition.y + chikenGlobalBounds.height + 0 });
}

Eggs::~Eggs()
{
}

void Eggs::setBrokenAnimation(Resources& res, sf::Time& tm)
{
	m_brokenTime = m_endAnimaition += tm;
	m_sprite.setAnimation(res.getEggAnimation(1));
	
	m_isBroken = true;
}


