BGOpen("wf400",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030504000_05_000");
MsgDisp("Hiiragi","It's opening.
Let's go inside.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
BGOpen("wf410",0);
ChMouth(5,4);
ChMotion(5,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030504000_05_010");
MsgDisp("Hiiragi","Even from the audience, I can feel the
tension before the curtain rises.");
MsgDispSksp(1,0);
MsgDisp("主人公","Hehe, it's not ｛柊＊＊＊｝'s
play?
...Ah, seems like it's starting!");
MsgDispSksp(0);
SEPlay("EV_SE_038");
SEWait();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
