BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","...Alright.
Time to head home.");
VoicePlay("E010120000_01_000");
MsgDisp("Kazama?","Will sushi do?");
VoicePlay("E010120000_06_000");
MsgDisp("Himuro?","The only possible choice is hamburger.");
MsgDisp("主人公","These voices——");
VoicePlay("E010120000_01_010");
MsgDisp("Kazama?","Inori, you have no decision power.
I'm the wallet.");
VoicePlay("E010120000_06_010");
MsgDisp("Himuro?","In a case like this, shouldn't you respect
my opinion?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,255,0,0,2,8,#1,0,1,0,30);
ChOpen(6,255,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","Just as I guessed! ｛風真＊＊｝ and
｛氷室＊＊｝!");
ChEye(1,3);
ChMouth(1,2);
ChMotion(1,3);
VoiceEVSPlay(1);
VoicePlay("E010120000_01_020");
MsgDisp("Kazama","｛主人公｝.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoiceEVSPlay(6);
VoicePlay("E010120000_06_020");
MsgDisp("Himuro","｛主人公｝.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("E010120000_01_030");
MsgDisp("Kazama","Inori, that's what you call her?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010120000_06_030");
MsgDisp("Himuro","Right back at you, Ryota-senpai.
Heh, so that's how it is?");
MsgDisp("主人公","Hum......
What are you guys doing here?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010120000_01_040");
MsgDisp("Kazama","Nothing much.
Inori's just being a brat and squawking
about wanting a hamburger.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("E010120000_06_040");
MsgDisp("Himuro","But if you think about it, our
arrangements comes with a clause of
confidentiality, doesn't it?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("E010120000_01_050");
MsgDisp("Kazama","Uhh......
Got it.");
ChEyeOpenLevel(1,0);
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("E010120000_06_050");
MsgDisp("Himuro","Oh, by the way, you coming to get a
hamburger too?
Ryota-senpai's treat.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("E010120000_01_060");
MsgDisp("Kazama","Hey.
Inori, confidentiality.");
MsgDisp("主人公","Err...... It looks like you guys have
stuff to talk about, so I'll pass.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010120000_01_070");
MsgDisp("Kazama","Right.
See you around.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
VoicePlay("E010120000_01_080");
MsgDisp("Kazama","Come on, Inori, let's go.
Winning Burger, right?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
ChPosition(6,0);
Wait(60,0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("E010120000_06_060");
MsgDisp("Himuro","Ryota-senpai asked to me teach him how to
swim.
His request.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,1);
VoicePlay("E010120000_06_070");
MsgDisp("Himuro","Take care then!");
MsgDisp("主人公","Y-You too.
Bye.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(6);
MsgDisp("主人公","(Did ｛氷室＊＊｝ just break
confidentiality?)");
MsgClose();
ScrFadeOut(0,0);
