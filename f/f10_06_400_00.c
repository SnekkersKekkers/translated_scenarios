BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Umm, my next lesson is...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,30,0,0,0,-1,-1,0,0);
VoicePlay("F100640000_06_000");
MsgDisp("Himuro","Ah...");
MsgDisp("主人公","Ah,｛氷室＊＊｝.
Do you have PE now?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100640000_06_010");
MsgDisp("Himuro","Yeah.
You?");
MsgDisp("主人公","I think I——");
VoiceEVSPlay(1);
VoicePlay("F100640000_01_000");
MsgDisp("Kazama?","｛主人公｝.");
ChPosition(6,1);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,30,0,0,0,-1,-1,0,2);
MsgDisp("主人公","Ah,｛風真＊＊｝.
What's up?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("F100640000_01_010");
MsgDisp("Kazama","What's up you say...
Ah, hey, we're moving classrooms next 
aren't we? I'll end up 
leaving you behind.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("F100640000_01_020");
MsgDisp("Kazama","...Ahh, you're here Inori.");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("F100640000_06_020");
MsgDisp("Himuro","You noticed, didn't you?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F100640000_01_030");
MsgDisp("Kazama","What are you talking about?
Come on, let's goー.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(1);
ChPosition(6,0);
MsgDisp("主人公","Alright!
...｛氷室＊＊｝, see you later.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("F100640000_06_030");
MsgDisp("Himuro","Please——");
MsgDisp("主人公","Eh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("F100640000_06_040");
MsgDisp("Himuro","Give my best regards to Ryota-senpai.
Well then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
MsgDisp("主人公","Eh∋");
MsgDisp("主人公","(｛氷室＊＊｝, were you angry...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
