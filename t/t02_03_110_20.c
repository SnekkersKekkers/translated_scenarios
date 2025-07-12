ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
MsgDisp("主人公","Me too......
I also like you.");
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("T020311000_03_150");
MsgDisp("Honda","Heeh?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("T020311000_03_160");
MsgDisp("Honda","Is that okay?
I was expecting to be turned down......");
MsgDisp("主人公","Huh? Why?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("T020311000_03_170");
MsgDisp("Honda","No. I see, I did it!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020311000_03_180");
MsgDisp("Honda","I said everything I wanted to so now......
That's right!!");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(3,0,0);
Wait(120,0);
StlOpen("ev_03_18");
ScrFadeIn(0);
VoicePlay("T020311000_03_190");
MsgDisp("Honda","I found you, the one I love, from now 
on I'll always be by your side.");
VoicePlay("T020311000_03_200");
MsgDisp("Honda","This is important, so I'll say it again
and again.");
MsgClear();
StlEffect(1,1,60);
Wait(300,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(300,0);
