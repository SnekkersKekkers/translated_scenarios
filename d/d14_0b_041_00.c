ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChCheek(3,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChCheek(4,0);
MsgDisp("主人公","By the way have you been able to contact
｛風真＊＊｝?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("D140B04100_04_000");
MsgDisp("Nanatsumori","No, not at all.
He's not responding to neither phone calls
or texts.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("D140B04100_03_000");
MsgDisp("Honda","I wonder what's up.");
ChEye(4,3);
ChMouth(4,1);
ChMotion(4,2,1);
VoicePlay("D140B04100_04_020");
MsgDisp("Nanatsumori","Ah... Could it be he forgot his phone at
home?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("D140B04100_03_020");
MsgDisp("Honda","That's possible.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("D140B04100_04_030");
MsgDisp("Nanatsumori","It's lunch break now, so he went home to
get it.
His house is quite close right?");
MsgDisp("主人公","Eh? Ah, yeah.
That's right but...");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("D140B04100_04_040");
MsgDisp("Nanatsumori","That's right. Therefore, he's not here
because he's searching for it and has lost
contact with us.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("D140B04100_03_030");
MsgDisp("Honda","Heeh. It must be convenient to have your
house so close by. ...Right?");
MsgDisp("主人公","(It's definitely convenient but But it's a
big shock when you forget something. I'm
sure ｛風真＊＊｝ is super frustrated
about now...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
ChClose(4,0,0);
