MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChNanaType(0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ScrFadeIn(0);
VoicePlay("B360423600_04_000");
MsgDisp("Nanatsumori","This really is something you have
to see in the summer after all.");
MsgDisp("主人公","How wonderful...
Why are the illuminations so beautiful?");
ChMotion(4,1,1);
VoicePlay("B360423600_04_010");
MsgDisp("Nanatsumori","It's like that in order 
to move everyone?");
MsgDisp("主人公","Ah, I see.
Yeah, it is moving...");
ChEye(4,4);
ChMotion(4,0,1);
VoicePlay("B360423600_04_020");
MsgDisp("Nanatsumori","My, my.
Your eyes are watering..");
ChEye(4,0);
VoicePlay("B360423600_04_030");
MsgDisp("Nanatsumori","Hey, look this way.");
MsgDisp("主人公","Eh...");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChClose(4,0,30);
ChLayout(0);
ChNanaType(0);
ChOpen(4,255,0,0,3,-1,-1,0,0,0,60);
MsgDisp("主人公","(｛七ツ森＊｝'s face is super close...)");
VoicePlay("B360423600_04_040");
MsgDisp("Nanatsumori","Your eyes...");
MsgDisp("主人公","｛七ツ森＊｝……");
ChMotion(4,5,1);
VoicePlay("B360423600_04_050");
MsgDisp("Nanatsumori","I'm about to go- boom!");
MsgDisp("主人公","Eh∈");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_505");
MsgDisp("","
Chu");
MsgClose();
ChClose(4,0,30);
ChLayout(1);
ChNanaType(0);
ChOpen(4,255,0,4,1,-1,-1,10,0,0,30);
ScrFadeIn(0);
ChMotion(4,5,1);
VoicePlay("B360423600_04_060");
MsgDisp("Nanatsumori","S-sorry!
I did't mean to do something 
like that just no——");
MsgDisp("主人公","Just now, on my n-nose...");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0,1);
VoicePlay("B360423600_04_070");
MsgDisp("Nanatsumori","I-I think I kissed it...
Sorry.");
MsgDisp("主人公","N-no.
It's alright.");
ChEye(4,4);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("B360423600_04_080");
MsgDisp("Nanatsumori","I got too energetic...
This is definitely the most
mortifying thing of this year...");
MsgDisp("主人公","Hey, ｛七ツ森＊｝, cheer up.
Let's watch the parade?");
ChEyeOpenLevel(4,0);
VoicePlay("B360423600_04_090");
MsgDisp("Nanatsumori","Yes...");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ChCheek(4,0);
