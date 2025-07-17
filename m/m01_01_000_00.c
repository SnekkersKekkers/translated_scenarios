SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","Yes.");
VoicePlay("M010100000_01_000");
MsgDisp("Kazama?","It's me.
I came to see how you were doing.");
MsgDisp("主人公","Eehh∈ ｛風真＊＊｝∋
P, please come in...");
SEPlay("EV_SE_DOOR_007");
Wait(18);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A");
ChOpen(1,255,0,4,2,#1,#1,0,0);
VoicePlay("M010100000_01_010");
MsgDisp("Kazama","How are you?
Gotten a little better?");
MsgDisp("主人公","Mm, I'm okay now.
Sorry I worried you...");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("M010100000_01_020");
MsgDisp("Kazama","That right, that's good...");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("M010100000_01_030");
MsgDisp("Kazama","If you can handle food now, here's this.");
SEPlay("EV_SE_665",0.2,0.5);
SEWait();
MsgDisp("主人公","Waa, it's cute.
A pinwheel cookie.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("M010100000_01_040");
MsgDisp("Kazama","Aa. When I was in England, Mom made them
for me a lot. Icing Cookies.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("M010100000_01_050");
MsgDisp("Kazama","And it's the pinwheel from our memories.
Eat this and get well soon.");
MsgDisp("主人公","Mm.
If I blow on it like 'huuu' it seems like
it'd turn.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("M010100000_01_060");
MsgDisp("Kazama","The sugar'd just go flying.");
MsgDisp("主人公","Huu...
It really did.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("M010100000_01_070");
MsgDisp("Kazama","Seems like you're getting better.
Listen, it's important to heal.
Be sure to get plenty of sleep.");
MsgDisp("主人公","Yes.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("M010100000_01_080");
MsgDisp("Kazama","Good answer.
Later, then.");
MsgClose();
SEPlay("EV_SE_690",0.1,0.5);
BGMStop();
ChClose(1);
Wait(50,1);
SEStop("EV_SE_690",0.5);
SEPlay("EV_SE_DOOR_008",0,0.5);
SEWait();
MsgDisp("主人公","(｛風真＊＊｝,thank you.
I feel a lot better.
I'll rest properly and get all better!)");
