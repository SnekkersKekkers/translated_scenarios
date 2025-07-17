BGOpen("wf200",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Well then...
Should I go home now?)");
BGMPlay("BGM_C22_HIKARU_A",0.01);
MsgClose();
ChOpen(22,255,0,0,0,#1,#1,0,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("E010540000_22_000");
MsgDisp("Hikaru","Ah, it's Mari～▼
What are you up to?");
MsgDisp("主人公","Ah, ｛ひかる＊｝.
I'm on my way home from shopping.
How about you?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("E010540000_22_010");
MsgDisp("Hikaru","I'm waiting for the chairman.");
MsgDisp("主人公","Chairman...
｛柊＊＊＊｝?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChPosition(22,2);
MsgClose();
ChOpen(5,255,4,0,4,#1,#1,0,1);
VoicePlay("E010540000_05_000");
MsgDisp("Hiiragi","Sorry to keep you waiting,
Hanatsubaki-san.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("E010540000_05_010");
MsgDisp("Hiiragi","Hello, ｛主人公｝.
You're here too?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("E010540000_22_020");
MsgDisp("Hikaru","Hikaru and Mari are always together▼
Right?");
MsgDisp("主人公","Hehe, yeah.
But what are ｛柊＊＊＊｝ and
｛ひかる＊｝ doing?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010540000_05_020");
MsgDisp("Hiiragi","I-");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("E010540000_22_030");
MsgDisp("Hikaru","We're on a date♪");
ChMouth(5,2);
ChMotion(5,4);
MsgDisp("主人公","Ehh ∋");
VoicePlay("E010540000_05_030");
MsgDisp("Hiiragi","What are you saying?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0,1);
ChEyeOpenLevel(22,8);
VoicePlay("E010540000_22_040");
MsgDisp("Hikaru","Hahaha...
Mari was so surprised.
Yanosuke-san could've played along better.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("E010540000_22_050");
MsgDisp("Hikaru","Anyway, it was just a joke.
Ehe ▼");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010540000_05_040");
MsgDisp("Hiiragi","I wanted to give Goro-sensei a ticket to
the Habataki Theater Company, so I asked
Hikaru.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("E010540000_22_060");
MsgDisp("Hikaru","Mhm!
My uncle is a big supporter of the
company～");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010540000_05_050");
MsgDisp("Hiiragi","Yes.
Please give him my thanks.
I'll take my leave now.");
MsgClose();
SEPlay("EV_SE_640");
SEWait();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
ChPosition(22,0);
Wait(60,0);
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("E010540000_22_070");
MsgDisp("Hikaru","Wow... It's a premium ticket. Should I ask
uncle if it's okay for me, Mari, and sis
to go too?");
MsgDisp("主人公","Eh, is it okay?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("E010540000_22_080");
MsgDisp("Hikaru","Yeah, I'm sure uncle will give it to me as
a present.
Look forward to it, 'kay?");
MsgDisp("主人公","Okay!");
MsgDisp("主人公","(The head of the theater company and the
model. They're both so amazing, but
they're also so kind.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
