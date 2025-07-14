BGOpen("sc624",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛本多＊＊｝! I won!");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("H4A0300000_03_000");
MsgDisp("Honda","Haa......
So it really was you?");
MsgDisp("主人公","Hm?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("H4A0300000_03_010");
MsgDisp("Honda","It was so beautiful that it felt like it
wasn't the you that I knew who performed.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("H4A0300000_03_020");
MsgDisp("Honda","Your graceful movements, the way the balls
and ribbons seemed to gravitate to you, it
was the result of your hard work......");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("H4A0300000_03_030");
MsgDisp("Honda","Yeah, I was really impressed.
Congrats on winning, and thank you!");
MsgDisp("主人公","(I got thanked...... But I'm really glad I
stayed in the rhythmic gymnastics club!
Today's the best day ever!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
