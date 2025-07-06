MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("T020301000_03_000");
MsgDisp("Honda?","｛主人公｝.");
MsgClear();
Wait(60);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C03_HONDA_KOKU",0.01);
ChOpen(3,254,0,0,4,-1,-1,0,0);
MsgDisp("主人公","｛本多＊＊｝......
Why are you here?");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("T020301000_03_010");
MsgDisp("Honda","I came here to see you.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,2,1);
ChEyeOpenLevel(3,0);
VoicePlay("T020301000_03_020");
MsgDisp("Honda","Now, and perhaps even before that......
Even at Haba High too.");
MsgDisp("主人公","Eh?");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("T020301000_03_030");
MsgDisp("Honda","I've always been looking for you.");
MsgDisp("主人公","Always?");
ChMotion(3,1,1);
VoicePlay("T020301000_03_040");
MsgDisp("Honda","Right. I was always looking for something
I could devote my life to. And it turns
out that was you.");
MsgDisp("主人公","……！");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("T020301000_03_050");
MsgDisp("Honda","I just couldn't find it.
I guess I'm not very good at searching.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("T020301000_03_060");
MsgDisp("Honda","In middle school I would frantically
search through books but...... 
I couldn't find anything.");
ChMouth(3,0);
VoicePlay("T020301000_03_070");
MsgDisp("Honda","So, from high school onwards, I started
looking for it in the outside world. And
then, finally, I met you.");
MsgDisp("主人公","｛本多＊＊｝……");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("T020301000_03_080");
MsgDisp("Honda","The thing I can devote my life to,
and that's you.
I want to study you.");
MsgDisp("主人公","Eh∋
You want to study me?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("T020301000_03_090");
MsgDisp("Honda","Haha, Thanks to you, I realized that
people are most important to me.
My family, my friends......you.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("T020301000_03_100");
MsgDisp("Honda","That's why I want to study people. It's a
long-term topic that I'm sure I'll never
finish even if I spend my whole life
studying it.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("T020301000_03_110");
MsgDisp("Honda","But with you by my side, I won't just get
lost in a book anymore.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
ChCheek(3,8);
VoicePlay("T020301000_03_120");
MsgDisp("Honda","Because you're here, within my reach.
Within my reach is you who I'll devote my
life to.");
MsgDisp("主人公","｛本多＊＊｝……");
MsgClear();
ChClose(3);
ChCustomLayout(3,5,0,-2.5);
Wait(60);
SEPlay("EV_SE_544");
ChOpen(3,254,1,4,4,-1,-1,0,0,0,120);
VoicePlay("T020301000_03_130");
MsgDisp("Honda","Please. My beloved,
I want you to be by my side.
Stay by my side forever and ever.");
