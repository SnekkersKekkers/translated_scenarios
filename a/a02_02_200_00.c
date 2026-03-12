BGOpen("sc512",0);
ScrFadeIn(0);
MsgDisp("主人公","(Let's see...
The track and field office should be right
around here...)");
MsgDisp("主人公","(The club's advisor is Mikage-sensei, but he
said the club captain is the one doing all
the work...)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_DOOR_005");
SEWait();
VoicePlay("A020220000_02_000");
MsgDisp("Sassa?","Yes, come in.");
MsgDisp("主人公","Excuse me.");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_DOOR_019");
MsgClose();
ChOpen(2,37,0,0,0,#1,#1,0,0);
BGOpen("sc608",0);
Wait(50);
BGMPlay("BGM_C02_SASSA_I",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(Wow, he's so big...
Is he the club captain?)");
MsgDisp("主人公","Um, hello, I brought the admission form.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,2);
VoicePlay("A020220000_02_010");
MsgDisp("Sassa?","Hm—m...
The admissions are usually made through
Mikage-sensei, though?");
MsgDisp("主人公","｛Mikage＊＊｝ told me to look for the club
captain...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("A020220000_02_020");
MsgDisp("Sassa?","Ah, I see.
Mikage-sensei is the club advisor, but he
doesn't really manage the club activities.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("A020220000_02_030");
MsgDisp("Sassa?","The track team couldn't find an advisor, and
Mikage-sensei stepped up to help.
Everyone's really grateful.");
MsgDisp("主人公","Oh, I see.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("A020220000_02_040");
MsgDisp("Sassa?","Sure, I'll take you to the captain.
He's out on the field.");
MsgDisp("主人公","Wait, you aren't the captain?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("A020220000_02_050");
MsgDisp("Sassa?","Me?
No way, I'm not on that level.");
MsgDisp("主人公","I honestly thought you were the captain...");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("A020220000_02_060");
MsgDisp("Sassa?","Did I come off that way?
When you're big like me, people think your
attitude is big too... It's a real problem.");
MsgDisp("主人公","Hehe.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("A020220000_02_070");
MsgDisp("Sassa","I'm Sassa Nozomu, just a regular member.
So no need to be so formal with me!");
MsgDisp("主人公","Ah, my name is ｛主人公姓名｝.
Nice to meet you!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("A020220000_02_080");
MsgDisp("Sassa","Yeah, nice to meet you.
Let's do our best as clubmates!");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGMVol(0.5,2);
ChClose(2);
BGOpen("sc601",0);
Wait(40);
ScrFadeIn(0);
VoicePlay("A020220000_39_000");
MsgDisp("Manager","On the third Sunday of every month, the club
holds group practice.
Make sure to participate.");
MsgDisp("主人公","Understood!");
VoicePlay("A020220000_39_010");
MsgDisp("Manager","Well then, I'll be counting on you from today
on, manager!");
MsgDisp("主人公","I'll do my best!");
MsgClose();
SEPlay("EV_SE_628");
Wait(42,0);
MsgClose();
ChOpen(2,37,0,0,4,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("A020220000_02_090");
MsgDisp("Sassa","｛主人公｝.
So you're gonna be the manager, huh?");
MsgDisp("主人公","Yeah, I'll do whatever I can to help you
guys!");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("A020220000_02_100");
MsgDisp("Sassa","Suddenly I'm feeling super motivated!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("A020220000_02_110");
MsgDisp("Sassa","By the way, I'm doing the Octathlon!");
MsgDisp("主人公","The Octathlon?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("A020220000_02_120");
MsgDisp("Sassa","You probably don't know it.
There are eight events, and your total score
across all of them counts.");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,1);
ChEyeOpenLevel(2,0);
VoicePlay("A020220000_02_130");
MsgDisp("Sassa","I'm a track and field idiot aiming for 1st
place in every event.
Even the others think I'm crazy.");
ChEye(2,0);
ChMotion(2,0);
ChEyeOpenLevel(2,10);
MsgDisp("主人公","Ehh?
Are you for real?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("A020220000_02_140");
MsgDisp("Sassa","Yeah, I'm dead serious.
Alright then, catch you later, manager!");
MsgClose();
SEPlay("EV_SE_672");
BGMStop();
MsgClose();
ChClose(2);
MsgDisp("主人公","(｛Sassa＊＊｝, huh...
He has an amazing goal...
I'll do my best to support him!)");
MsgClose();
ScrFadeOut(0);
