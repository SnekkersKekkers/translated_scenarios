ChLayout(1);
MsgClose();
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,5);
ChEyeOpenLevel(3,0);
VoicePlay("G020310300_03_000");
MsgDisp("Honda","Ahh, I can't take it anymore!∈");
MsgDisp("主人公","Eh∋");
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("G020310300_03_010");
MsgDisp("Honda","I need to properly apologize for what
happened at the beach the other day!");
MsgDisp("主人公","Eh?");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,1);
VoicePlay("G020310300_03_020");
MsgDisp("Honda","You were troubled when I said that
suddenly, right? I'm really sorry!");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("G020310300_03_030");
MsgDisp("Honda","To be honest, I considered just pretending
it never happened and hoping you'd forget
about it, but that's just not like me.");
ChMotion(3,0);
VoicePlay("G020310300_03_040");
MsgDisp("Honda","I wanted to properly apologize
face-to-face, and most importantly——");
ChSet(3,2);
VoicePlay("G020310300_03_050");
MsgDisp("Honda","I really hate the idea of it being
forgotten as if it never happened......");
MsgDisp("主人公","｛本多＊＊｝……");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("G020310300_03_060");
MsgDisp("Honda","I still have a lot of feelings I haven't
processed and emotions I don't understand.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,1);
VoicePlay("G020310300_03_070");
MsgDisp("Honda","So, I need to sort through all of that and
come to terms with it before I can talk to
you about it.");
MsgDisp("主人公","Yeah, I got it.
......I'll be waiting, okay?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0);
VoiceEVSPlay(3);
VoicePlay("G020310300_03_080");
MsgDisp("Honda","｛主人公｝......
Yeah, thank you.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,2);
ChEyeOpenLevel(3,0);
VoicePlay("G020310300_03_090");
MsgDisp("Honda","Ah, I feel so much better...... It's like
I can finally breathe normally again.");
MsgDisp("主人公","(｛本多＊＊｝, you were worrying
about it that much......thank you.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,-1);
ChMouthOpenLevel(3,-1);
ChCheek(3,0);
