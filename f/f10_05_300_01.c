BGOpen("sc130",1);
ChLayout(1);
MsgClose();
ChOpen(5,254,4,0,4,#1,#1,0,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
VoicePlay("F100530001_48_000");
MsgDisp("School Girl","Farewell.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100530001_05_000");
MsgDisp("Hiiragi","Farewell.
Take care.");
MsgDisp("主人公","｛柊＊＊＊｝, thank you for your
hard work.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("F100530001_05_010");
MsgDisp("Hiiragi","｛主人公｝.
An important job of the student council is
to enforce greetings.");
MsgDisp("主人公","You really do l ike them, don't you?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("F100530001_05_020");
MsgDisp("Hiiragi","Yes.
Everyone greets me in all sorts of fun
ways.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChPosition(5,1);
Wait(60,0);
MsgClose();
SEWait();
ChOpen(22,254,0,0,3,#1,#1,0,2);
ChMotion(22,3,1);
VoicePlay("F100530001_22_000");
MsgDisp("Hikaru","Salut～!");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100530001_05_030");
MsgDisp("Hiiragi","Salutー!");
MsgDisp("主人公","Eh?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F100530001_22_010");
MsgDisp("Hikaru","Mari, come on.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100530001_05_040");
MsgDisp("Hiiragi","It is time for the greeting enforcement
campaign.");
VoicePlay("F100530001_21_000");
MsgDisp("Michiru?","Hey.");
MsgClose();
ChClose(5,0,30);
ChClose(22,0,30);
ChLayout(2);
MsgClose();
ChOpen(5,254,4,0,4,#1,#1,0,1,0,30);
ChOpen(22,254,0,0,0,#1,#1,0,0,0,30);
SEPlay("EV_SE_544");
ChOpen(21,254,0,0,4,#1,#1,0,2);
VoicePlay("F100530001_21_010");
MsgDisp("Michiru","Both Hikaru and Yanosuke-san are getting
carried away, aren't they?");
MsgDisp("主人公","Ah, ｛みちる＊｝.");
ChEye(22,2);
ChMouth(22,2);
ChMotion(22,1,1);
VoicePlay("F100530001_22_020");
MsgDisp("Hikaru","Come on, big sis.
Don't get in the way of us enjoying the
greeting campaign, okay?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F100530001_21_020");
MsgDisp("Michiru","Mari isn't enjoying it, she must be
troubled.");
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,5);
VoicePlay("F100530001_05_050");
MsgDisp("Hiiragi","Eh∋
Are you feeling troubled?");
MsgDisp("主人公","Eh, um no.
I'm not troubled but...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("F100530001_22_030");
MsgDisp("Hikaru","See?
You were mistaken big sis.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("F100530001_21_030");
MsgDisp("Michiru","Really?
Then, go ahead, Mari.");
MsgDisp("主人公","Umm...s-salut?");
ChEye(5,4);
ChMotion(5,0,1);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
ChEyeOpenLevel(22,0);
VoicePlay("F100530001_22_040");
MsgDisp("Hikaru","Yepyep, salut, Yanosuke-san.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100530001_05_060");
MsgDisp("Hiiragi","Yes, salutー.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(22);
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F100530001_21_040");
MsgDisp("Michiru","Goodbye, Yanosuke-san.
Then, let's head home.");
MsgDisp("主人公","Y-Yeah.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(21);
MsgClose();
ChClose(5,0,30);
ChLayout(1);
ChOpen(5,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","(Hmm...
I guess I'm being forced to say it after
all...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
