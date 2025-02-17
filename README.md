# Dogdeball
基于Unreal Engine 5 的一款俯视角躲避球游戏，采用C++进行开发

# 游戏截屏 #
![image](https://github.com/bgsheep/Dogdeball/blob/main/demos/Screen%20shot.png)
![image](https://github.com/bgsheep/Dogdeball/blob/main/demos/Screen%20shot%201.png)
![image](https://github.com/bgsheep/Dogdeball/blob/main/demos/Screen%20shot%202.png)
![image](https://github.com/bgsheep/Dogdeball/blob/main/demos/Screen%20shot%203.png)

# 游戏介绍 #
基于UE5第三人称模板C++开发，是一款以俯视视角为核心的迷宫探索与躲避球机制的游戏。玩家需要在迷宫中移动，躲避敌方AI发射的躲避球，目标是移动到金色地砖胜利区完成游戏胜利。敌方AI可以透过幽灵墙观察玩家，并以固定频率发射躲避球；玩家血量显示在左上角，被击中4次后角色阵亡，支持重新开始或退出游戏。地图包含实心墙和幽灵墙：实心墙无法穿透，而幽灵墙可以穿越，但不影响敌方AI的视野和攻击判定。

# 功能实现 #
1. 实现用户角色的移动操作与交互功能；
2. 使用射线检测完成敌方角色身体旋转朝向可见的用户角色，并使用定时器完成躲避球Actor的循环投掷；
3. 创建不同材质和功能的Wall类并设计关卡，设计VictoryBox及胜利事件。
4. 实现躲避球碰撞与角色血量变化逻辑，利用UMG可视化显示用户角色血量进度条与角色死亡的菜单界面；
5. 为躲避球设置随它与玩家距离变化的碰撞音效与粒子特效，击中角色的爆炸音效以及游戏背景音乐；

# 游玩展示 #
![demo1](https://github.com/bgsheep/Dogdeball/blob/main/demos/Dodgeball-demo1.gif)
![demo2](https://github.com/bgsheep/Dogdeball/blob/main/demos/Dodgeball-demo2.gif)
