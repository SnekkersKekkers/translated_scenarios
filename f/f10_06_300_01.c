BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I have to return to class now...)");
VoicePlay("F100630001_06_000");
MsgDisp("Himuro?","T-That's why I wont't call you that!
That's all.
Well then.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
SEWait();
VoicePlay("F100630001_22_000");
MsgDisp("Hikaru?","Ehhh∋
Himuro-chan wait!");
MsgDisp("主人公","(Hmm?
These voices...)");
MsgDisp("主人公","｛みちる＊｝,
｛ひかる＊｝.
Umm, what is it this time?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(22,254,0,2,1,#1,#1,0,0);
ChMotion(22,3,1);
VoicePlay("F100630001_22_010");
MsgDisp("Hikaru","Ah, Mari!
Get this～!");
ChPosition(22,1);
MsgClose();
ChOpen(21,254,0,0,0,#1,#1,0,2);
VoicePlay("F100630001_21_000");
MsgDisp("Michiru","Hikaru asked Himuro-chan to refer to us in
a cuter way.");
ChEye(22,2);
ChMouth(22,2);
ChMotion(22,1,1);
VoicePlay("F100630001_22_020");
MsgDisp("Hikaru","After all, Himuro-chan calls both of us
\"Hanatsubaki-senpai\", right?");
MsgDisp("主人公","Is that so?");
ChEye(22,2);
ChMouth(22,1);
ChMotion(22,5,1);
VoicePlay("F100630001_22_030");
MsgDisp("Hikaru","It's too coarse.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("F100630001_21_010");
MsgDisp("Michiru","But that was still a bit too much for
Himuro-chan...");
MsgDisp("主人公","What did you ask to be called by?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
ChEyeOpenLevel(22,0);
VoicePlay("F100630001_22_040");
MsgDisp("Hikaru","Pikarin and Micchi.
See, isn't it so cute▼");
MsgDisp("主人公","(Hmm.
I feel like that's too high of a hurdle
for ｛氷室＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
