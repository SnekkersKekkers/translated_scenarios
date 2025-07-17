BGOpen("sc130",1);
ScrFadeIn(0);
MsgDisp("主人公","(During the school festival, there was an
organic café here...)");
MsgDisp("主人公","(That's right, I should go take a look at
the vegetable garden.)");
MsgClose();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,2,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","(...
Ah it's ｛御影＊＊｝! )");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoiceEVSPlay(7);
VoicePlay("G110701100_07_000");
MsgDisp("Mikage","｛主人公｝.
Haa... the last cultural festival is
over.");
MsgDisp("主人公","Yes...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110701100_07_010");
MsgDisp("Mikage","It's like we're suffering from burnout
syndrome.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110701100_07_020");
MsgDisp("Mikage","An organic cafe was a great idea.");
MsgDisp("主人公","Yes. thanks to
｛御影＊＊｝, we were able
to set up in front of a prime location;
the school gates.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110701100_07_030");
MsgDisp("Mikage","At the cultural festival, it's okay for
the cultural club to stand out, right?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110701100_07_040");
MsgDisp("Mikage","It would be great if it became tradition
for the Gardening club to host a café in
front of the school gates.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110701100_07_050");
MsgDisp("Mikage","But, I wonder if it wouldn't be as
exciting without you third years?");
MsgDisp("主人公","It'll be fine. The second years and
｛御影＊＊｝ will be
there too.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110701100_07_060");
MsgDisp("Mikage","Ahh, that's right.
The second years are following in your
footsteps.");
MsgDisp("主人公","(There won't be another cultural festival
with ｛御影＊＊｝...
I'm so sad...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
