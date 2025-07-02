ChLayout(1);
BGOpen("sc510",1);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, I have to go home now...
My class duties took a while.)");
VoicePlay("F100740000_07_000");
MsgDisp("Mikage","I'm very sorry.
From now on, I'll be more careful...");
MsgDisp("主人公","(Eh, that voice just now...｛御影＊＊｝?)");
VoicePlay("F100740000_32_000");
MsgDisp("Vice Principal Himuro","Mikage-sensei, 
you underestimate yourself.");
VoicePlay("F100740000_07_010");
MsgDisp("Mikage","Really?");
VoicePlay("F100740000_32_010");
MsgDisp("Vice Principal Himuro","Hm?
There's still someone here.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(7,37,0,0,4,-1,-1,0,1,0,30);
ChOpen(32,254,0,0,0,-1,-1,0,2,0,30);
MsgDisp("主人公","Ah, umm, please excuse me...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100740000_07_020");
MsgDisp("Mikage","Oh, thank you for your 
efforts with class duty.");
MsgDisp("主人公","Yes...");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("F100740000_32_020");
MsgDisp("Vice Principal Himuro","It seems that Mikage-sensei was just
waiting for the students to 
finish their class duties.
...My complaint was off the mark.");
MsgDisp("主人公","Eh...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("F100740000_07_030");
MsgDisp("Mikage","…………");
VoicePlay("F100740000_32_030");
MsgDisp("Vice Principal Himuro","However, please refrain from 
coming into the classroom dressed 
like that. That is all.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(32);
SEWait();
ChClose(7);
MsgClose();
ChOpen(7,37,0,0,0,-1,-1,0,0);
MsgDisp("主人公","I'm sorry.
You were waiting for me to 
finish with class duties.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100740000_07_040");
MsgDisp("Mikage","Why are you apologizing for working
so hard on your class duties?");
MsgDisp("主人公","After all, it was because of that, 
that Himuro-sensei got angry with you.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("F100740000_07_050");
MsgDisp("Mikage","He's always angry with me, righT?
I was just scolded for dressing like this.");
MsgDisp("主人公","｛御影＊＊｝……");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100740000_07_060");
MsgDisp("Mikage","Hey, go home already.
Be careful on you way back.");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(｛御影＊＊｝ is kind...)");
MsgClose();
ScrFadeOut(0,0);
