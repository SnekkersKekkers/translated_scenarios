BGOpen("wf200",1);
ScrFadeIn(0);
MsgDisp("主人公","(Hmm, I've been wandering around a lot
today. But it's hard to summarize for
an article...)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","(I think I'll take a break so
I can organize my notes.)");
VoiceEVSPlay(4);
VoicePlay("G110400302_04_000");
MsgDisp("Nanatsumori?","｛主人公｝.");
SEStop("EV_SE_DOOR_014");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛七ツ森＊｝!");
ChEye(4,1);
ChMouth(4,1);
VoicePlay("G110400302_04_010");
MsgDisp("Nanatsumori","Shh...");
MsgDisp("主人公","Ah, sorry...");
VoicePlay("G110400302_04_020");
MsgDisp("Nanatsumori","Wait... don't worry about that here.
Just wanted to let you know that.");
MsgDisp("主人公","But, should I still be sorry?");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("G110400302_04_030");
MsgDisp("Nanatsumori","...Are you doing coverage for today?");
MsgDisp("主人公","Yeah. I went for a walk around
the waterfront area today.");
VoicePlay("G110400302_04_040");
MsgDisp("Nanatsumori","Ooh, there's a lot of fashionable spots
there so maybe you got a lot of notes?");
MsgDisp("主人公","Yeah. But my notes are a bit
of a mess so I took a break so I
can organize them.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,2);
VoicePlay("G110400302_04_050");
MsgDisp("Nanatsumori","Sounds like you got great notes?
How coool. I look forward to 
reading your article.");
MsgDisp("主人公","Yeah, I'll do my best!");
ChMotion(4,0);
VoicePlay("G110400302_04_060");
MsgDisp("Nanatsumori","Yeah. I'm a fan of this new reporter,
so I'm really looking forward to reading
this new article.");
MsgDisp("主人公","(Oof... pressure.
But if ｛七ツ森＊｝ is going to read it,
I'll do my best to write a good article!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
