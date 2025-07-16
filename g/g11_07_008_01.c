BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(That's right, I need to submit the
gardening club activities record.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,2,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛御影＊＊｝.
You've brought the gardening club
activities record.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700801_07_000");
MsgDisp("Mikage","Oh, thank you. I also have no classes this
afternoon, so maybe I'll have a rest
whilst looking at it?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700801_07_010");
MsgDisp("Mikage","Teacher's privileges.
Looking over at activity logs is fun, you
know?");
MsgDisp("主人公","Plant growth records are interesting,
aren't they?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700801_07_020");
MsgDisp("Mikage","Isn't it.
But I'm keeping records so I can see the
changes in you guys.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700801_07_030");
MsgDisp("Mikage","It looks like you're gradually paying more
attention to the weather?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("G110700801_07_040");
MsgDisp("Mikage","The girl who used to make a fuss every
time she saw a bug now casually picks them
up with her hands.");
MsgDisp("主人公","But, touching them with my hands is still
a bit......");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700801_07_050");
MsgDisp("Mikage","Even if you say that, before you know it,
you've become okay with it.");
MsgDisp("主人公","(Hey, there's something on
｛御影＊＊｝ 's
clothes......?)");
BGMVol(0.5,2);
while (1){
    RunEverydaySksp(7,1,0,0,1,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("G110700801_07_060");
    MsgDisp("Mikage","Is it mud?
Don't worry about it.");
    }
VoicePlay("G110700801_07_080");
ChEye(7,4);
ChMouth(7,0);
ChMotion(7,0);
MsgDisp("Mikage","Oh, is there a bug on it?");
MsgDisp("主人公","Ehhhh∋");
VoicePlay("G110700801_07_090");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
MsgDisp("Mikage","Why are you surprised?");
MsgDisp("主人公","Because I thought it was a bug or
something......");
VoicePlay("G110700801_07_100");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
MsgDisp("Mikage","I see.
Well, this will help you get used to it.");
MsgDisp("主人公","(Yes, it looks like it'll take some time
for me to get used to the bugs......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
