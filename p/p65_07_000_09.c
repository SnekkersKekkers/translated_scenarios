MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,2,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("P650700009_07_000");
MsgDisp("Mikage","｛主人公｝. You already know, right?
The customers left with their shoulders
slumped.");
MsgDisp("主人公","Yes, it was a fail, huh...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P650700009_07_010");
MsgDisp("Mikage","Yes, it was hopeless.
But, it's not the herbs and vegetables
fault.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P650700009_07_020");
MsgDisp("Mikage","You painstakingly raised them.
Aren't they precious children?");
MsgDisp("主人公","Yes...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P650700009_07_030");
MsgDisp("Mikage","Vegetables aren't just for show, make sure
you eat them at home.
They're misshapen, but delicious.");
MsgDisp("主人公","Yes...");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("P650700009_07_040");
MsgDisp("Mikage","It's alright. It was your last school
festival, but there'll be a time where you
can look back on it and laugh.");
MsgDisp("主人公","(Haa... even though it was the last
cultural festival of my high school life,
I should have tried harder.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
