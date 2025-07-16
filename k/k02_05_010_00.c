BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for today.");
ChEye(5,3);
VoicePlay("K020501000_05_000");
MsgDisp("Hiiragi","No, thank you as well.
And, here's to another year.");
MsgDisp("主人公","Hm?
Yes, Happy New Year......?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("K020501000_05_010");
MsgDisp("Hiiragi","No, for something else.
Happy birthday.");
MsgDisp("主人公","Ah...... thank you!");
SEPlay("EV_SE_665");
SEWait();
ChEye(5,4);
ChMotion(5,0);
VoicePlay("K020501000_05_020");
MsgDisp("Hiiragi","Please take this. ーA new year's gift.");
MsgDisp("主人公","Ah, a birthday present!");
VoicePlay("K020501000_05_030");
MsgDisp("Hiiragi","I hope it suits your tastes.");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,3);
VoicePlay("K020501000_05_040");
MsgDisp("Hiiragi","Once again, happy birthday.
May this year treat you well.");
VoicePlay("K020501000_05_050");
MsgDisp("Hiiragi","Well then, good night.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(5);
Wait(30);
MsgDisp("主人公","(I'm so happy......
This year looks like it's going to be a
great one!)");
MsgClose();
ScrFadeOut(0,0);
