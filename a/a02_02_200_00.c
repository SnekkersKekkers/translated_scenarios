BGOpen("sc512",0);
ScrFadeIn(0);
MsgDisp("主人公","(Let's see......The track and field office
should be right around here......)");
MsgDisp("主人公","(The club's advisor is Mikage-sensei, but
he said the club captain is the one doing
all the work......)");
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
MsgDisp("主人公","(Wow, he's so big......
Is he the club captain?)");
MsgDisp("主人公","Um, hello, I brought the admission 
form.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,2);
VoicePlay("A020220000_02_010");
MsgDisp("Sassa?","Hm—m......
The admissions are usually made with
Mikage-sensei?");
MsgDisp("主人公","｛御影＊＊｝ told me to look for the
club captain......");
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
MsgDisp("Sassa?","The track team was having trouble finding
an advisor, so Mikage-sensei helped us
out. We're truly grateful for him!");
MsgDisp("主人公","So that's how it is...
I see.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("A020220000_02_040");
MsgDisp("Sassa?","Yeah. Let me walk you to the captain! He's
on the field!");
MsgDisp("主人公","Wait, you aren't the captain?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("A020220000_02_050");
MsgDisp("Sassa?","Me?
No way, I'm not on that level.");
MsgDisp("主人公","I honestly thought you were the 
captain...");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("A020220000_02_060");
MsgDisp("Sassa?","Did I make it sound that way? I know it
might seem like my personality's just as
big as I am...... Kind of an issue.");
MsgDisp("主人公","Hehe.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("A020220000_02_070");
MsgDisp("Sassa","I'm Sassa Nozomu, regular member of the
club. So you don't have to treat me any
differently!");
MsgDisp("主人公","Ah, my name is ｛主人公姓名｝.
Nice to meet you, regular member?");
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
MsgDisp("Manager","Every month, on the third Sunday of the
month, the club is holding general
practice. So be sure to participate.");
MsgDisp("主人公","Understood!");
VoicePlay("A020220000_39_010");
MsgDisp("Manager","Well then, I'll be counting on you from
today on, manager!");
MsgDisp("主人公","I'll do my best!");
MsgClose();
SEPlay("EV_SE_628");
Wait(42,0);
MsgClose();
ChOpen(2,37,0,0,4,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("A020220000_02_090");
MsgDisp("Sassa","｛主人公｝. So you're gonna be the
manager, huh?");
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
MsgDisp("Sassa","Well, I'm still thinking about it. There
are eight events: short distance, long
distance, jumping, and throwing. And then,
we count scores.");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,1);
ChEyeOpenLevel(2,0);
VoicePlay("A020220000_02_130");
MsgDisp("Sassa","I'm a track and field idiot who's aiming
for a clean sweep. 1st place in every
category. It surprises people.");
ChEye(2,0);
ChMotion(2,0);
ChEyeOpenLevel(2,10);
MsgDisp("主人公","Ehh? Are you for real?");
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
MsgDisp("主人公","(This guy, ｛颯砂＊＊｝......
He has an amazing goal......
I'll try my best to help!)");
MsgClose();
ScrFadeOut(0);
