BGOpen("ex000",1);
ChLayout(1);
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","(Phew.
Today was another productive day!)");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_TWO");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,255,0,0,0,#1,#1,0,1);
ChOpen(22,255,0,3,3,#1,#1,0,2);
ChMotion(22,3,1);
VoicePlay("D110D00000_22_000");
MsgDisp("Hikaru","Ma～ri▼");
MsgDisp("主人公","Eh∋ Ah, ｛みちる＊｝,
｛ひかる＊｝! What's up?");
ChMotion(22,4,1);
VoicePlay("D110D00000_22_010");
MsgDisp("Hikaru","You've built a bed of flowers in your
heart's garden♪");
MsgDisp("主人公","......A bed of flowers?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("D110D00000_21_000");
MsgDisp("Michiru","Hehe.
Is Mari gathering her \"favorite flowers\"?");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
StlOpen("ev_0c_01");
ScrFadeIn(0);
VoicePlay("D110D00000_22_020");
MsgDisp("Hikaru","We can see it, you know......
3 Differently colored, tres～ bien roses,
all gathered together in harmony.");
VoicePlay("D110D00000_21_010");
MsgDisp("Michiru","That's the feeling Mari has nurtured.
I'm certain they will all cherish Mari.");
MsgDisp("主人公","３ Roses of Different Colors......
My feelings......");
MsgClose();
ScrFadeOut(0);
StlClose();
MsgClose();
ChOpen(21,255,0,0,4,#1,#1,0,1,0,30);
ChOpen(22,255,0,0,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
VoicePlay("D110D00000_21_020");
MsgDisp("Michiru","Be careful, though.
Roses can be delicate.");
ChMotion(22,3,1);
VoicePlay("D110D00000_22_030");
MsgDisp("Hikaru","Right, right!
That's important in this situation～");
ChEye(22,4);
ChMouth(22,3);
ChMotion(22,2,1);
ChEyeOpenLevel(22,0);
VoicePlay("D110D00000_22_040");
MsgDisp("Hikaru","If you water only one side with love or
let it wilt, it may disrupt the harmony of
your flower bed!");
ChEye(22,0);
ChMotion(22,0,1);
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("D110D00000_21_030");
MsgDisp("Michiru","Of course, it's not really a bad thing to
only care about one color.
But in a flower bed, balance is important.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("D110D00000_22_050");
MsgDisp("Hikaru","If you're concerned about the state of the
flower bed, call Hikaru♪ Hikaru can tell
you about \"Mari's Garden\"▼");
MsgDisp("主人公","(A flower bed of 3 differently colored
roses is inside me......? If I want to
know more I can call
｛ひかる＊｝! )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
ChPrmTblAdd(6,0);
ChPrmTblAdd(7,0);
