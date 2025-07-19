BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(We're changing classes soon.)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(22,254,0,0,3,#1,#1,0,2,0,30);
VoicePlay("F102130002_21_000");
MsgDisp("Michiru","Mari.");
ChMotion(22,3,1);
VoicePlay("F102130002_22_000");
MsgDisp("Hikaru","Mari!");
MsgDisp("主人公","｛みちる＊｝, ｛ひかる＊｝.
What's up, you two?");
ChMotion(21,3);
VoicePlay("F102130002_21_010");
MsgDisp("Michiru","The biology textbook——");
ChEye(22,0);
ChMouth(22,1);
ChMotion(22,4,1);
ChEyeOpenLevel(22,10);
VoicePlay("F102130002_22_010");
MsgDisp("Hikaru","Ah!
That's what Hikaru was going to say!");
ChEye(22,0);
MsgDisp("主人公","Ummm...
Did both of you forget your biology
textbook?");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("F102130002_21_020");
MsgDisp("Michiru","Looks like it...?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("F102130002_22_020");
MsgDisp("Hikaru","Big sis can understand the lesson without
the textbook, right?
Hikaru can't do it without the textbook!");
ChEye(21,1);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F102130002_21_030");
MsgDisp("Michiru","Hikaru, this isn't the place to be bossy.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0,1);
MsgDisp("主人公","Hey, you two are in different classes, so
you have separate biology classes, right?
Which of you have it first?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F102130002_21_040");
MsgDisp("Michiru","I have it next period.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,3,1);
VoicePlay("F102130002_22_030");
MsgDisp("Hikaru","Hikaru has it first thing in the
afternoon...huh?");
MsgDisp("主人公","Right?");
ChEye(21,2);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F102130002_21_050");
MsgDisp("Michiru","...Sorry, Mari.
Could I borrow it first, then hand it to
Hikaru after that?");
MsgDisp("主人公","I don't have biology today, so that's
fine.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F102130002_22_040");
MsgDisp("Hikaru","Ehe!
Mari, thank you▼");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
ChCheek(21,8);
VoicePlay("F102130002_21_060");
MsgDisp("Michiru","No way...
I didn't want to show this kind of
embarrassing twin synchronicity.");
MsgDisp("主人公","(Hehe!
They're alike in their panic-stricken
nature, they really are twins after all.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
