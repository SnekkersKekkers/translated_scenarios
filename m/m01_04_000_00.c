SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","...Mom?");
SEPlay("EV_SE_DOOR_007");
Wait(10);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
VoicePlay("M010400000_04_000");
MsgDisp("Nanatsumori","If you're asking about her, I just
finished introducing myself.");
MsgDisp("主人公","｛七ツ森＊｝∋
Why...");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("M010400000_04_010");
MsgDisp("Nanatsumori","What do you mean 'why'?
Obviously I came to do a sick visit.");
MsgDisp("主人公","Ah, right...");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("M010400000_04_020");
MsgDisp("Nanatsumori","I got some ice sweets that'll feel good in
your throat, and gave them to the missus.
Eat some later.");
MsgDisp("主人公","｛七ツ森＊｝, thank you.");
ChEye(4,2);
ChMouth(4,3);
VoicePlay("M010400000_04_030");
MsgDisp("Nanatsumori","...That's good.
Your color looks alright and all.
You can talk, too.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChMouthOpenLevel(4,0);
VoicePlay("M010400000_04_040");
MsgDisp("Nanatsumori","......");
ChMouthOpenLevel(4,#1);
VoicePlay("M010400000_04_050");
MsgDisp("Nanatsumori","When you're not at school, it's like the
sound's left the world, it feels too
quiet.");
ChMotion(4,2,1);
VoicePlay("M010400000_04_060");
MsgDisp("Nanatsumori","I could feel all over again how big your
existence is inside of me.");
MsgDisp("主人公","｛七ツ森＊｝...");
ChMotion(4,1,1);
VoiceEVSPlay(4);
VoicePlay("M010400000_04_070");
MsgDisp("Nanatsumori","｛主人公｝.
Next week, think you'll be able to come?");
MsgDisp("主人公","Mm.
I'm better now.
Thanks for worrying.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("M010400000_04_080");
MsgDisp("Nanatsumori","Mm.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("M010400000_04_090");
MsgDisp("Nanatsumori","About time to go.
Don't overdo it again?");
MsgDisp("主人公","Mm.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("M010400000_04_100");
MsgDisp("Nanatsumori","Good.
Next week I'll be waiting at school.
Let me hear your energetic voice.");
ChEye(4,4);
ChMouth(4,3);
VoicePlay("M010400000_04_110");
MsgDisp("Nanatsumori","Night.");
MsgClose();
SEPlay("EV_SE_690",0.1,0.5);
BGMStop();
MsgClose();
ChClose(4,0,30);
Wait(50,1);
SEStop("EV_SE_690",0.5);
SEPlay("EV_SE_DOOR_008",0,0.5);
SEWait();
MsgDisp("主人公","(I made ｛七ツ森＊｝ worry.
If I don't hurry and get better...!)");
