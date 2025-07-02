ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(My next class is in the science room.
I wonder if ｛御影＊＊｝ and ｛柊＊＊＊｝
will be there?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
BGOpen("sc352",0);
MsgClose();
SEPlay("EV_SE_DOOR_019");
ChOpen(7,37,0,0,0,-1,-1,0,1,0,30);
ChOpen(5,254,0,0,4,-1,-1,0,2,0,30);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
VoicePlay("F100720002_07_000");
MsgDisp("Mikage","Ohh, you came.");
VoicePlay("F100720002_05_000");
MsgDisp("Hiiragi","We have been waiting for you.");
MsgDisp("主人公","Hehe, ｛柊＊＊＊｝ 's class was 
here last, weren't they?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("F100720002_07_010");
MsgDisp("Mikage","Yeah, the class content is the same,
but the details are a secret.
Right, Yonosuke?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100720002_05_010");
MsgDisp("Hiiragi","Yes. Today's lesson was even better
than usual, with the most wonderful 
entertainment.");
ChEye(7,0);
ChMouth(7,3);
VoicePlay("F100720002_07_020");
MsgDisp("Mikage","It's got the chairman's 
stamp of approval.");
MsgDisp("主人公","Wow! I'm really 
looking forward to it.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100720002_05_020");
MsgDisp("Hiiragi","Fufu, Mikage-sensei,
the bar is getting higher f
or the audience.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100720002_07_030");
MsgDisp("Mikage","Yeah, I'll follow Yonosuke's advice,
and make sure to grab the 
attention of the audience.");
BGMVol(0.5,1);
SEPlay("EV_SE_SCHOOL_002");
Wait(30,0);
SEPlay("EV_SE_788",0.7,0.8);
Wait(50,0);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,4);
VoicePlay("F100720002_07_040");
MsgDisp("Mikage","Oh, it's a full house
again this time.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100720002_05_030");
MsgDisp("Hiiragi","Well then, that's it from me, 
Mikage-sensei. Please enjoy yourself.");
MsgDisp("主人公","Yeah, see you later.");
MsgClose();
SEStop("EV_SE_SCHOOL_002",2);
SEPlay("EV_SE_856");
ChClose(5,0,30);
ChClose(7,0,30);
VoicePlay("F100720002_07_050");
MsgDisp("Mikage","Okay, today, I'll pick some vegetables
from the gardening club's greenhouse
and observe their tissue
under a microscope.");
VoicePlay("F100720002_07_060");
MsgDisp("Mikage","After that...
Let's enjoy a delicious salad!");
SEPlay("EV_SE_841");
SEPlay("EV_SE_842");
VoicePlay("F100720002_44_000");
MsgDisp("School Girl","Amazing, it's like a salad bar!");
VoicePlay("F100720002_42_010");
MsgDisp("Male Student","Mikagecchi, 
I don't like vegetables thoughー.");
VoicePlay("F100720002_07_070");
MsgDisp("Mikage","It's people like you
that I want to feed my vegetables to.
Let's go pick our favorite vegetables.");
SEStop("EV_SE_841",1);
SEStop("EV_SE_842",2);
MsgDisp("主人公","(Wow, biology class is like a salad bar!
Haha, that's a great hook)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
