BGOpen("sc100",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,0,4,#1,#1,0,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
VoicePlay("F100530000_48_000");
MsgDisp("School Girl A","Good morning!");
VoicePlay("F100530000_44_000");
MsgDisp("School Girl B","Morningー.");
VoicePlay("F100530000_05_000");
MsgDisp("Hiiragi","Good morning.");
MsgDisp("主人公","｛柊＊＊＊｝, morning.
Thank you for your hard work.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("F100530000_05_010");
MsgDisp("Hiiragi","Yes, it is an important job for the
student council.
It is my turn today.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100530000_05_020");
MsgDisp("Hiiragi","But I actually like the greeting
reinforcement campaign.");
ChPosition(5,1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(22,254,0,0,0,#1,#1,0,2);
ChEye(22,4);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("F100530000_22_000");
MsgDisp("Hikaru","Bonjour～");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100530000_05_030");
MsgDisp("Hiiragi","Bonjour.");
MsgDisp("主人公","Ahaha!
｛ひかる＊｝, morning.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("F100530000_22_010");
MsgDisp("Hikaru","Mari, Yanosuke-san went to the trouble of
playing along.
Come on, you too?");
MsgDisp("主人公","Eh?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100530000_05_040");
MsgDisp("Hiiragi","Well, go ahead?");
MsgDisp("主人公","Umm...
B-Bonjour?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("F100530000_22_020");
MsgDisp("Hikaru","Yep, yep, Mari.
Wonderful!");
MsgDisp("主人公","Hey, you two...");
SEPlay("EV_SE_544");
VoicePlay("F100530000_21_000");
MsgDisp("Michiru?","Morning.");
MsgClose();
ChClose(5,0,30);
ChClose(22,0,30);
ChLayout(2);
MsgClose();
ChOpen(5,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(22,254,0,0,0,#1,#1,0,0,0,30);
ChOpen(21,254,3,0,0,#1,#1,0,2);
ChMotion(5,4);
VoicePlay("F100530000_05_050");
MsgDisp("Hiiragi","Yes, good morning.");
MsgDisp("主人公","Huh?
｛みちる＊｝ didn't say
it?");
ChEye(22,4);
ChMouth(22,3);
ChMotion(22,2,1);
VoicePlay("F100530000_22_030");
MsgDisp("Hikaru","It's impossible for big sis.");
ChEyeOpenLevel(22,0);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("F100530000_05_060");
MsgDisp("Hiiragi","Yes, she cannot be defeated.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F100530000_21_010");
MsgDisp("Michiru","What are you talking about?");
MsgDisp("主人公","I'm talking about \"bonjour\".");
ChEye(5,0);
ChMouth(5,4);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0,1);
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F100530000_21_020");
MsgDisp("Michiru","Haha.
So they made you say it, huh, Mari?
These two are hopeless.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(21);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("F100530000_22_040");
MsgDisp("Hikaru","Ah, wait for me, big sis.
Mari, let's go!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(22);
ChClose(5,0,30);
ChLayout(1);
ChOpen(5,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Y-Yeah.
Then ｛柊＊＊＊｝, do your best,
okay?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100530000_05_070");
MsgDisp("Hiiragi","Yes.
Greeting reinforcement is truly enjoyable.");
MsgDisp("主人公","(Hmm, maybe I need to keep an eye on
｛柊＊＊＊｝ and
｛ひかる＊｝...? )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
