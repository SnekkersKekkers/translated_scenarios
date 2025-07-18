BGOpen("sc230",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
ChOpen(21,254,2,2,2,#1,#1,0,0,0,0);
Wait(15,0);
ScrFadeIn(0);
VoicePlay("F102110001_21_000");
MsgDisp("Michiru","Ha...");
MsgDisp("主人公","｛みちる＊｝!");
ChEye(21,5);
ChMouth(21,5);
ChMotion(21,0);
VoicePlay("F102110001_21_010");
MsgDisp("Michiru","Mari.");
MsgDisp("主人公","...Are you alright?
Have you still not resolved what was
troubling you?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,2);
VoicePlay("F102110001_21_020");
MsgDisp("Michiru","Resolved...");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("F102110001_21_030");
MsgDisp("Michiru","That's right.
It won't fix itself even if I keep moping
about it.");
MsgDisp("主人公","Um...
If we thought about it together then maybe
we really could——");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("F102110001_21_040");
MsgDisp("Michiru","Mari, thank you.
You truly are a kind girl.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("F102110001_21_050");
MsgDisp("Michiru","But, let me think about it a bit more?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F102110001_21_060");
MsgDisp("Michiru","If it gets out of hand, I'll confide in
Mari.
So then...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(21);
MsgDisp("主人公","(｛みちる＊｝...yeah, let's wait a little
longer.)");
MsgClose();
ScrFadeOut(0,0);
