BGOpen("sc510",0);
ScrFadeIn(0);
VoicePlay("F100320002_03_000");
MsgDisp("Honda?","I realized once again how amazing Sakkun
is. The training for the octathlon is a
battle with a dilemma");
VoicePlay("F100320002_02_000");
MsgDisp("Sassa?","Yeah, that's right.
It's difficult because it's not just about
doing it.");
MsgDisp("主人公","(Ah, these voices...
It's ｛本多＊＊｝ and ｛颯砂＊＊｝!)");
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(3,254,0,3,3,#1,#1,0,1,0,30);
ChOpen(2,254,3,0,4,#1,#1,0,2,0,30);
MsgDisp("主人公","｛本多＊＊｝, are you asking for something
unreasonable from ｛颯砂＊＊｝ again...?");
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,5,1);
VoicePlay("F100320002_03_010");
MsgDisp("Honda","Ehh?
What's that?
Do I seem like that kind of person?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("F100320002_02_010");
MsgDisp("Sassa","Haha, I wasn't in really any kind of
trouble.");
ChEye(3,0);
ChMouth(3,4);
MsgDisp("主人公","Ah...so that's it.
｛本多＊＊｝, sorry.");
ChEye(3,1);
ChMotion(3,2,1);
ChEyeOpenLevel(3,0);
VoicePlay("F100320002_03_020");
MsgDisp("Honda","It's okay, even if I'm not causing
trouble, I'm not really helping in the end
either.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("F100320002_03_030");
MsgDisp("Honda","Sakkun's octathlon has its merits and
demerits even with the same training, so
it is difficult to benefit all sports.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("F100320002_03_040");
MsgDisp("Honda","If you raise one skill, you have to raise
another. Adjusting and managing this well
is more like a job of risk management than
a sport.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100320002_02_020");
MsgDisp("Sassa","Yeah, thank you, Iku.
I'm super happy.
That you understand me.");
ChSet(3,0);
MsgDisp("主人公","｛本多＊＊｝ would probably be amazing as a
real trainer...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100320002_02_030");
MsgDisp("Sassa","Yeah, I think so too.
There are times when athletes need logic
rather than guts.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100320002_02_040");
MsgDisp("Sassa","Since you understand that much, I would
like some Iku-like advice.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100320002_03_050");
MsgDisp("Honda","Yepyep, I'll think about it.
Other than cutting your hair.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3,1);
VoicePlay("F100320002_02_050");
MsgDisp("Sassa","Haha.
Oh, please do something else!
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,4,1);
ChPosition(3,0);
SEWait();
VoicePlay("F100320002_03_060");
MsgDisp("Honda","The fact remains that the shortcut is to
lose even a little bit of weight without
changing muscle mass, right?");
MsgDisp("主人公","(...Looks like ｛本多＊＊｝'s haircut training
menu is still kicking...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
