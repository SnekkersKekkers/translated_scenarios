BGOpen("sc530",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F100540000_07_000");
MsgDisp("Mikage?","f so, I definitely recommend it.
You'll like it!");
VoicePlay("F100540000_05_000");
MsgDisp("Hiiragi?","Yes, I'll try it next time.");
MsgDisp("主人公","(Huh, that voice just now...)");
BGMPlay("BGM_HANYOU_C",0.01);
MsgClose();
ChOpen(5,254,4,0,4,#1,#1,0,1);
ChOpen(7,254,0,0,0,#1,#1,0,2);
VoiceEVSPlay(5);
VoicePlay("F100540000_05_010");
MsgDisp("Hiiragi","｛主人公｝, good afternoon.
I was asking Mikage-sensei about Hiyashi
Chuuka.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100540000_07_010");
MsgDisp("Mikage","Yeah.
Are you also interested in Hiyashi Chuuka?");
MsgDisp("主人公","Good afternoon.
Do you both like Hiyashi Chuuka?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("F100540000_05_020");
MsgDisp("Hiiragi","No.
Actually, I've never tried it.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("F100540000_07_020");
MsgDisp("Mikage","Why is it that delicious?");
ChEye(5,0);
ChMotion(5,4);
MsgDisp("主人公","Hehe.
｛御影＊＊｝ loves it,
right?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("F100540000_07_030");
MsgDisp("Mikage","Yeah. I'd like to eat it all year round,
but I can only see it in the summer. When
autumn comes, it suddenly disappears.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100540000_05_030");
MsgDisp("Hiiragi","Their entrance and exit timing is quite
impressive.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100540000_07_040");
MsgDisp("Mikage","You get it.
And you like tokoroten, don't you?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4,1);
VoicePlay("F100540000_05_040");
MsgDisp("Hiiragi","Yes.
I eat it with vinegar soy sauce.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("F100540000_07_050");
MsgDisp("Mikage","Hiyashi Chuuka is the same.
Sesame sauce is good, but vinegar soy
sauce and mustard are the best.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100540000_05_050");
MsgDisp("Hiiragi","Mustard is also a must for tokoroten.");
MsgDisp("主人公","I see.
Hiyashi Chuuka and tokoroten have a lot in
common...");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("F100540000_07_060");
MsgDisp("Mikage","That's it.
Try it next time, won't ya?
See you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
ChPosition(5,0);
Wait(60,0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("F100540000_05_060");
MsgDisp("Hiiragi","｛主人公｝.
Did they have Hiyashi Chuuka in the
cafeteria?");
MsgDisp("主人公","(Um... did they?
I wonder?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
