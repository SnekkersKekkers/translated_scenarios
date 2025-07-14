MsgClose();
ChClose(5,0,0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Huh, it looks like ｛柊＊＊＊｝ hasn't
arrived yet...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("B110500001_34_000");
MsgDisp("Guy","Ah, a nice one has respawned.");
MsgDisp("主人公","Eh?");
MsgClose();
SEPlay("EV_SE_557",0.2);
ChOpen(34,254,0,0,0,#1,#1,0,0);
VoicePlay("B110500001_34_010");
MsgDisp("Guy","Let's get out of here quickly, because
you're an easy target right after
respawning.");
SEPlay("EV_SE_542");
ChPosition(34,2);
MsgClose();
Wait(55,0);
ChOpen(5,31,0,0,4,#1,#1,0,1,0,30);
MsgDispSksp(1,5);
VoiceEVSPlay(5);
VoicePlay("B110500001_05_000");
MsgDisp("Hiiragi","｛主人公｝.");
MsgDispSksp(0);
ChEye(34,1);
ChMouth(34,1);
VoicePlay("B110500001_34_020");
MsgDisp("Guy","Hm? I'm not adding a male character to my
party. Just despawn.");
MsgDispSksp(1,5);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B110500001_05_010");
MsgDisp("Hiiragi","I kept you waiting.
I'm sorry for being late.");
MsgDispSksp(0);
MsgDisp("主人公","Yeah, it's alright.");
MsgDispSksp(1,5);
VoicePlay("B110500001_05_020");
MsgDisp("Hiiragi","Then, let's go.");
MsgDispSksp(0);
ChEye(34,2);
ChMouth(34,2);
VoicePlay("B110500001_34_030");
MsgDisp("Guy","Huh, huh, can you not see me?
Is it a bug?");
ChEye(34,1);
ChMouth(34,1);
VoicePlay("B110500001_34_040");
MsgDisp("Guy","No, no this is reality, 
Isn't it weird?");
MsgClose();
SEPlay("EV_SE_580");
ChClose(34);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
ChPosition(5,0);
Wait(60,0);
VoicePlay("B110500001_34_050");
MsgDisp("Guy","Need to report this to the devs.");
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("B110500001_05_030");
MsgDisp("Hiiragi","It's hot, isn't it...
But ignoring it is probably the best
course of action.");
MsgDisp("主人公","(｛柊＊＊＊｝ is amazing huh...
I thought he really couldn't see him.)");
