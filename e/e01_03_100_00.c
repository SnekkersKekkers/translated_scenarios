BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright, better hurry home.)");
MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,255,0,0,0,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("E010310000_03_000");
MsgDisp("Honda","｛主人公｝.");
MsgDisp("主人公","Ah, ｛本多＊＊｝.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
ChEyeOpenLevel(3,8);
VoicePlay("E010310000_03_010");
MsgDisp("Honda","Huhu, is it possible that you
also～...?");
MsgDisp("主人公","Eh?
What?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("E010310000_03_020");
MsgDisp("Honda","Huh?
You didn't come to eat ramen?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("E010310000_03_030");
MsgDisp("Honda","There's new ramen shop that just opened in
the shopping district!");
MsgDisp("主人公","Huhu, is that why you're here?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("E010310000_03_040");
MsgDisp("Honda","Yeah, it's got a good reputation for its
soy sauce tonkotsu, and fatty backbone
chaccha type ramen.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("E010310000_03_050");
MsgDisp("Honda","The chaccha type one seems interesting,
don't you think?");
MsgDisp("主人公","Yeah, seems fun and delicious.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("E010310000_03_060");
MsgDisp("Honda","Right?
Come with me!");
MsgDisp("主人公","Sorry.
I don't think I can eat ramen now.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("E010310000_03_070");
MsgDisp("Honda","Is that so?
Why?");
MsgDisp("主人公","Because I won't be able to eat dinner
then. Are you gonna be able to,
｛本多＊＊｝?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("E010310000_03_080");
MsgDisp("Honda","Yeah, I'm totally fi-ne.
I've got another stomach for ramen.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("E010310000_03_090");
MsgDisp("Honda","Alright then I'm off to eat!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(Another stomach for ramen...
Is ｛本多＊＊｝ a big eater?)");
MsgClose();
ScrFadeOut(0,0);
