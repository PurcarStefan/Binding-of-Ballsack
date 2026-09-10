#pragma once

struct Node{
    bool hide = false;

    Node();
    virtual ~Node() = default;
    virtual void Draw();
    virtual void Update();
};