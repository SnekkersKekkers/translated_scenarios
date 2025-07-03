ChLayout(2);
BGOpen("sc210",0);
ScrFadeIn(0);
MsgDisp("主人公","(Today's weather is nice too.
...Huh, what class did I 
have in the afternoon?)");
VoicePlay("F100730001_22_000");
MsgDisp("Hikaru?","Ah.
Mari, this way!");
MsgDisp("主人公","Hm?
｛ひかる＊｝?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(7,37,0,0,0,-1,-1,0,0,0,30);
ChOpen(22,254,0,0,3,-1,-1,0,2,0,30);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("F100730001_07_000");
MsgDisp("Mikage","Is this the same as last time?");
ChMotion(22,4,1);
VoicePlay("F100730001_22_010");
MsgDisp("Hikaru","We won't let you 
get away today.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100730001_07_010");
MsgDisp("Mikage","I'm not running away or anything.
So, what is it?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("F100730001_21_000");
MsgDisp("Michiru","Today is about that hairdo.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F100730001_22_020");
MsgDisp("Hikaru","Yeah, that!
It's a mystery.");
MsgDisp("主人公","｛御影＊＊｝ 's hairstyle...
yeah, I'm kinda curious.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("F100730001_07_020");
MsgDisp("Mikage","What's with that?
You guys are really interested.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F100730001_21_010");
MsgDisp("Michiru","How long did it 
take to style it?");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,4);
VoicePlay("F100730001_07_030");
MsgDisp("Mikage","O-oh, Time to style it...
That's right, maybe about 15 minutes?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("F100730001_22_030");
MsgDisp("Hikaru","Wow, that's pretty quick!
I thought it would take longer.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100730001_07_040");
MsgDisp("Mikage","Not at all. It's almost shape-memory.
Once it dries, it's pretty much finished.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("F100730001_21_020");
MsgDisp("Michiru","I'm jealous of that...");
MsgDisp("主人公","Y-yeah.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("F100730001_22_040");
MsgDisp("Hikaru","Ah, but, Mikage-sensei 
commutes by bike, doesn't he?
Won't it fall apart under his helmet?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("F100730001_07_050");
MsgDisp("Mikage","It's fine.
After I come to school in the morning, 
I water it in the gardening club's
fields and it returns to normal.");
ChEye(7,0);
ChMouth(7,3);
VoicePlay("F100730001_07_060");
MsgDisp("Mikage","My hair is like a plant.
Even if it's limp, if I water it, 
it becomes new again.");
ChEye(21,5);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F100730001_21_030");
MsgDisp("Michiru","Amazing...");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,0,1);
ChEyeOpenLevel(22,10);
VoicePlay("F100730001_22_050");
MsgDisp("Hikaru","He waters it...?");
SEPlay("EV_SE_SCHOOL_002");
Wait(60,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100730001_07_070");
MsgDisp("Mikage","Hey, class is about to start.
See you later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgClose();
ChClose(21,0,30);
ChClose(22,0,30);
ChLayout(1);
MsgClose();
ChOpen(21,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(22,254,0,0,2,-1,-1,0,2,0,30);
ChMotion(22,4,1);
VoicePlay("F100730001_22_060");
MsgDisp("Hikaru","...Hey.
Aren't we dealing with 
this too well?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F100730001_21_040");
MsgDisp("Michiru","Propably.
There's no way it's the same
as a plant.");
MsgDisp("主人公","(They both seem very suspicious?)");
SEStop("EV_SE_SCHOOL_002",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
