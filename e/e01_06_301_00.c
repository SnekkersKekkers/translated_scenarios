BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Well, I guess it's time to go home.
......Huh?)");
VoiceEVSPlay(6);
VoicePlay("E010630100_06_000");
MsgDisp("Himuro?","｛主人公｝, what a coincidence.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah...... ｛氷室＊＊｝! Were you out
shopping?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010630100_06_010");
MsgDisp("Himuro","No, I'm meeting someone.
It's 30 minutes before the appointment, so
he should be here by now.");
MsgDisp("主人公","Eh, 30 minutes early......?");
ChPosition(6,1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
Wait(30,0);
ChOpen(7,255,0,0,0,#1,#1,0,2);
VoicePlay("E010630100_07_000");
MsgDisp("Mikage","Yo! Are you ready?");
MsgDisp("主人公","Ah, ｛御影＊＊｝!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("E010630100_06_020");
MsgDisp("Himuro","Kojiro-senpai......
Why are you here?");
MsgDisp("主人公","Huh? Isn't ｛御影＊＊｝ the person
you're meeting with?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010630100_06_030");
MsgDisp("Himuro","No way.
Kojiro-sensei isn't the type to arrive 30
minutes early.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("E010630100_07_010");
MsgDisp("Mikage","Hey now, I don't know what you're talking
about, but isn't that pretty mean?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("E010630100_07_020");
MsgDisp("Mikage","Although I may seem like this, I keep to
time and promises, you know?");
VoicePlay("E010630100_32_000");
MsgDisp("VP Himuro?","If that's the case, will you please keep
your promise with me?");
ChEye(7,5);
ChMouth(7,4);
ChMotion(7,0,1);
VoicePlay("E010630100_07_030");
MsgDisp("Mikage","Huh?");
MsgClose();
ChClose(6,0,30);
ChClose(7,0,30);
ChLayout(2);
SEPlay("EV_SE_544");
ChOpen(32,254,0,1,0,#1,#1,0,0,0,30);
ChOpen(7,255,1,2,0,#1,#1,0,2,0,30);
ChOpen(6,255,0,0,0,#1,#1,0,1,0,30);
VoicePlay("E010630100_32_010");
MsgDisp("VP Himuro","The promise is to not wander around the
school in overalls.");
MsgDisp("主人公","Himuro-sensei ∋
Ah, so the person you're meeting is......");
VoicePlay("E010630100_06_050");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,3);
MsgDisp("Himuro","Yes.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("E010630100_07_040");
MsgDisp("Mikage","Ah-...... what a coincidence. I can't
believe we ran into each other here.");
ChEye(7,5);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("E010630100_07_050");
MsgDisp("Mikage","Ummー The sales are about to begin at the
supermarket.
I'll go ahead-");
ChEye(32,1);
ChMouth(32,1);
ChEyeOpenLevel(32,0);
VoicePlay("E010630100_32_020");
MsgDisp("VP Himuro","Mikage-sensei.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010630100_07_060");
MsgDisp("Mikage","Y-Yes......");
ChEye(32,1);
ChMouth(32,1);
VoicePlay("E010630100_32_030");
MsgDisp("VP Himuro","We'll talk about our promise
at school.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("E010630100_07_070");
MsgDisp("Mikage","......Yes.");
MsgDisp("主人公","(｛御影＊＊｝ is in trouble......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
