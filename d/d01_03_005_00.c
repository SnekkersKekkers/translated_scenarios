BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(There's still time until afternoon
classes start, so I think I'll relax
a bit on the rooftop.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_011",0,1);
SEWait();
VoicePlay("D010300500_03_000");
MsgDisp("Honda?","Why～!");
SEPlay("EV_SE_616",0,0.6);
SEWait();
MsgDisp("主人公","(∋ That voice just now...... Was that
｛本多＊＊｝? Huh, didn't something like
this happen before......)");
StlOpen("ev_03_11");
BGMPlay("BGM_C03_HONDA_C",0.01);
EfctOpen(6);
StlEye(3,2);
StlMouth(3,1);
ScrFadeIn(0);
VoicePlay("D010300500_03_010");
MsgDisp("Honda","............Sigh.");
MsgDisp("主人公","｛本多＊＊｝, what's wrong?");
StlEye(3,1);
StlMouth(3,0);
VoicePlay("D010300500_03_020");
MsgDisp("Honda","Ahh, it's you......");
MsgDisp("主人公","You shouldn't sleep here if you're
not feeling well. Should we go to the
nurse's office?");
StlMouth(3,1);
VoicePlay("D010300500_03_030");
MsgDisp("Honda","My little sister is the weird one,
not me.");
MsgDisp("主人公","Eh, your sister......? Last time you were 
here, weren't you very happy that your 
sister passed her entrance exam?");
StlEye(3,2);
StlMouth(3,1);
VoicePlay("D010300500_03_040");
MsgDisp("Honda","I was.
Sigh, back then we were still good
friends......");
MsgDisp("主人公","Did you guys have a fight?");
StlEye(3,1);
StlMouth(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("D010300500_03_050");
MsgDisp("Honda","No, nothing like that happened. The 
other day I invited her to the museum 
and she declined.");
MsgDisp("主人公","Maybe she had something else to do?");
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,0,1);
VoicePlay("D010300500_03_060");
MsgDisp("Honda","She said she wasn't interested in
the botanical gardens either though......");
MsgDisp("主人公","I see......But you know, it's not good
to lie down in a place like this. Come
on, let me help you up.");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("D010300500_03_070");
MsgDisp("Honda","Y...Yeah...");
MsgClose();
ScrFadeOut(0);
StlClose();
EfctClose();
BGMVol(0.5,2);
SEPlay("EV_SE_617",0.5,0.5);
SEWait();
Wait(30,0);
SEPlay("EV_SE_063",0,0.6);
SEWait();
BGOpen("sc231",0);
MsgClose();
ChOpen(3,254,7,2,2,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(3,2,1);
VoicePlay("D010300500_03_080");
MsgDisp("Honda","And after all that, I saw a sign on my
sister's door yesterday. It said......
\"Brothers prohibited from entering\".");
MsgDisp("主人公","Eh?
Have you been going inside without
permission?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("D010300500_03_090");
MsgDisp("Honda","No.
I always made sure to say \"I'm coming
in\" first.");
MsgDisp("主人公","Hmm......Maybe that's why.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("D010300500_03_100");
MsgDisp("Honda","Eh?");
MsgDisp("主人公","You should knock before you enter
someone's room. Especially when it's a
teenage girl.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("D010300500_03_110");
MsgDisp("Honda","......I see, I guess you're right.
I can definitely do that.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D010300500_03_120");
MsgDisp("Honda","Thanks!　With your help, things can
finally go back to normal.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
VoicePlay("D010300500_03_130");
MsgDisp("Honda","Alright, we're going to start knocking!
１０００ Knocks∈");
MsgDisp("主人公","Ehh∋");
MsgDisp("主人公","(......I think I can empathize with his
little sister a bit and why she didn't
want him coming in......?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(3,0);
