BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","...Alright.
Time to head home.
Huh, is that...");
VoicePlay("E010140000_01_000");
MsgDisp("Kazama?","You're being a pain!
I said no.");
VoicePlay("E010140000_22_000");
MsgDisp("Hikaru?","But whyyy～∋
Mari will be sooo happy, I swear!");
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(1,255,0,0,2,8,#1,0,1,0,30);
ChOpen(22,255,0,4,0,#1,#1,0,2,0,30);
ChEyeOpenLevel(1,#1);
MsgDisp("主人公","Me?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("E010140000_22_010");
MsgDisp("Hikaru","Mariii!
Nice timing!▼
Come one, let's ask Kazama-kun together～");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010140000_01_010");
MsgDisp("Kazama","You always show up at an incredible time.");
MsgDisp("主人公","Ask him about what?...
What were you guys talking about?");
ChMouth(1,2);
ChEyeOpenLevel(1,0);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("E010140000_22_020");
MsgDisp("Hikaru","Next issue, I'm doing a special in a
fashion magazine about \"Super handsome
high school students\"! And I can't do it
without mentioning Kazama-kun, right?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("E010140000_01_020");
MsgDisp("Kazama","I told you I don't wanna do it.");
MsgDisp("主人公","Hey, ｛ひかる＊｝...
You're bothering ｛風真＊＊｝,
right?");
ChEye(22,2);
ChMouth(22,5);
ChMotion(22,2,1);
VoicePlay("E010140000_22_030");
MsgDisp("Hikaru","Heh, really?? I thought he was playing
hard to get, but I'd eventually get my
\"oka～y\". Sorry about that.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
MsgDisp("主人公","Hehe.
Feeling better, ｛風真＊＊｝?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("E010140000_22_040");
MsgDisp("Hikaru","Yeah, you should thank Mari for standing
up for you!");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("E010140000_01_030");
MsgDisp("Kazama","How did it become like that...");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("E010140000_22_050");
MsgDisp("Hikaru","Alri～ght! I'll go look for handsome guys
somewhere else! Salut♪");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(22);
ChPosition(1,0);
Wait(60,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("E010140000_01_040");
MsgDisp("Kazama","Selfish as ever.");
VoicePlay("E010140000_22_060");
MsgDisp("Hikaru","Ah, my sis is probably gonna come and ask
you, so keep Mari close to save you
again～!♪");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("E010140000_01_050");
MsgDisp("Kazama","Uh, is she for real.
These Hanatsubakis are intense...
I'm counting on you when time comes!");
MsgDisp("主人公","Yeah!
But I think you'd make everyone happy by
modeling for their article, right?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010140000_01_060");
MsgDisp("Kazama","That kind of stuff, y'know I'm not cut out
for that. Thanks for saving the day. See
ya.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","(｛風真＊＊｝...He is definitely gonna be
pressured into doing it by
｛みちる＊｝...)");
MsgClose();
ScrFadeOut(0,0);
